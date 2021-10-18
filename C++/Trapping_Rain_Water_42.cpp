// AUTHOR: Vishal Patil

// First Solution - Brute Force
class Solution {
public:
    int trap(vector<int>& height){
        if(height.size() < 3) return 0;
        int ans = 0, max = 0;
        stack<int> stk;
        
        int i=0;
        while(height[i] == 0) i++;
        
        for(; i<height.size(); ++i){
            if(height[i] < max) stk.push(height[i]);
            else {
                while(!stk.empty()){
                    ans += max - stk.top();
                    stk.pop();
                }
                max = height[i];
                stk.push(height[i]);
            }
        }
        int max2 = stk.top();
        stk.pop();
        while(!stk.empty()){
            if(max2 <= stk.top()) max2 = stk.top(), stk.pop();
            else{
                ans += max2 - stk.top();
                stk.pop();
            }
        }
        
        return ans;   
    }
};

// Second Solution - Dynamic Programming
int trap(vector<int>& height)
{
    int ans = 0, size = height.size();
    if(size <= 2) return 0;
    
    vector<int> left_max(size), right_max(size);
    left_max[0] = height[0];

    for(int i=1; i<size; i++) left_max[i] = max(height[i], left_max[i - 1]);
    
    right_max[size - 1] = height[size - 1];
    for(int i=size-2; i>=0; i--) right_max[i] = max(height[i], right_max[i + 1]);
    
    for(int i=1; i<size-1; i++) ans += min(left_max[i], right_max[i]) - height[i];

    return ans;
}

// Third Solution - 2 pointer approach
int trap(vector<int>& height)
{
    int left = 0, right = height.size() - 1;
    int ans = 0, left_max = 0, right_max = 0;
    
    while(left < right){
        if(height[left] < height[right])
            height[left] >= left_max ? (left_max = height[left++]) : ans += (left_max - height[left++]);
        else
            height[right] >= right_max ? (right_max = height[right++]) : ans += (right_max - height[right++]);
    }
    return ans;
}