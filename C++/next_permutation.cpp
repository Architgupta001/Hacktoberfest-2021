#include <bits/stdc++.h>
using namespace std;
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int breakpoint= -1;
        //find breakpoint
        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                breakpoint=i-1;
                break;
            }
        }
        //if no breakpoint is found
        if(breakpoint<0){
            reverse(nums.begin(),nums.end());
            return;
        }
        //if breakpoint is found
        for(int i=n-1;i>=0;i--){
            if(nums[i]>nums[breakpoint]){
                swap(nums[breakpoint],nums[i]);
                reverse(nums.begin()+breakpoint+1,nums.end());
                break;
            }
        }
    }
int main(){
     vector<int> vect;
    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);
     nextPermutation(vect);
    for (int x : vect)
        cout << x << " ";
}
