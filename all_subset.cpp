class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>> a;
        vector<int> b(0);
        a.push_back(b);
        for(int i=0;i<nums.size();i++)
        {
            vector<vector<int>> y;
            for(auto it: a)
            {
                vector<int> x=it;
                x.push_back(nums[i]);
                y.push_back(x);
            }
            for(auto it:y)
            {
                a.push_back(it);
            }
        }
        return a;
    }
};
