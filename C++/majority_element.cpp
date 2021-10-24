/*
Given an array nums of size n,
 return the majority element.

The majority element is the element that 
appears more than ⌊n / 2⌋ times.
 You may assume that the majority element 
 always exists in the array.
*/
#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& a){
        int major=a[0],count=1;
        for(int i=1;i<a.size();i++){
            if(count==0){
                major=a[i];
                count++;
            }
            else if(major==a[i])count++;
            else count--;
        }
        return major;
    }
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    cout<<majorityElement(v);
    return 0;
}
