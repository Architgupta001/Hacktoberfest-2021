/*
Link:https://leetcode.com/problems/subsets/
platform:Leetcode
*/
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& a) {
        vector<vector<int>>ans;
        int n=a.size();
        //we know total number of subsets =2^n.
        //and number of bits n->(0,1,2).
        //we check if j bit of i number is set or not 
        //if set then print a[j].
        for(int i=0;i<(1<<n);i++)
        {
            vector<int>v;
            for(int j=0;j<n;j++)
            {
                if(i&(1<<j))
                {
                    v.push_back(a[j]);
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};
