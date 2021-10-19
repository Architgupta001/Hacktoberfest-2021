// Brute Force
class Solution {
public:
    static bool myComp(vector<int> a, vector<int> b){
        return a[1] > b[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize){
        int ans = 0;
        sort(boxTypes.begin(), boxTypes.end(), myComp);
        
        for(int i=0; i<boxTypes.size(); ++i){
            if(boxTypes[i][0] <= truckSize){
                ans += boxTypes[i][0] * boxTypes[i][1];
                truckSize -= boxTypes[i][0];
            }
            else{
                ans += truckSize * boxTypes[i][1];
                return ans;
            }
        }
        return ans;
    }
};

// Optimised Solution
/*
Intuition: The constraint that "boxes per unit" will be max 1000 allows us to use 1000 buckets to sort by boxes per unit.
Ie., we can create an array where the indices represent 0 boxes per unit, 1 boxes per unit, 2 boxes per unit, 3 boxes per unit, ... 1000 boxes per unit. And the buckets[i] will represent the number of boxes at each index.

Algorithm: take the given data and sort it into the 1000 buckets. this is O(n) because we loop over the given data once.
loop over the buckets backwards- so that we start at a higher boxes per unit to get as many units as possible. in each iteration:
check if the current bucket has any values (isn't -1).
if the bucket has a value, check if the truck has space enough for all the boxes. if yes, load up all units.
if the truck hasn't enough space, load up only the units you can.
*/
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        vector<int> buckets(1001, -1);
        int space_remaining_boxes = truckSize;
        int units_loaded = 0;
        for(int i = 0; i < boxTypes.size(); ++i){
            if(buckets[ boxTypes[i][1] ] == -1) buckets[ boxTypes[i][1] ] = boxTypes[i][0];
            else buckets[ boxTypes[i][1] ] += boxTypes[i][0];     // already has a value
            // optimization idea: when populating, track the highest and lowest boxesperunit for use as indices below
        }
        
        for (int i = 1000; i >= 0; --i) {
            if (buckets[i] == -1) continue;
            
            if (buckets[i] > space_remaining_boxes) {   // case:not enough space on truck. eg., we have 2 box but truck space 1.
                units_loaded += space_remaining_boxes*i;
                return units_loaded;
            } else {
                units_loaded += buckets[i]*i;           // i is 10units/box. buckets[i] is 2 boxes. total units is 20.
                space_remaining_boxes -= buckets[i];    // space_remaining is in units of boxes.
            }
        }
        return units_loaded;
    }
};

// Short Implementation of Optimized Solution
int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
    sort(begin(boxTypes), end(boxTypes), [](auto& a, auto& b){ return a[1] > b[1];});   // sort by number of units/box
    int maxUnits = 0;
    for(auto& box : boxTypes) {
        if(truckSize <= 0) break;                           // keep choosing greedily till you run out of truckSize 
        maxUnits += min(truckSize, box[0]) * box[1];        // add (no of box * units) in that box
        truckSize -= box[0];
    }
    return maxUnits;
}
