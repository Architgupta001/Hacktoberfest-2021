/*
Problem Statement - 
Given an array arr[] of size N, check if it can be 
partitioned into two parts such that the sum of 
elements in both parts is the same.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool subsetSum(int arr[], int n, int sum){
        bool t[n+1][sum+1];

        for(int i=0; i<sum+1; i++){
            t[0][i] = false;
        }

        for(int i=0; i<n+1;i++){
            t[i][0] = true;
        }

        for(int i=1; i<n+1; i++){
            for(int j=1; j<sum+1; j++){
                if(arr[i-1] <= j){
                    t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
                }else{
                    t[i][j] = t[i-1][j];
                }
            }
        }

        return t[n][sum];
    }

    int equalPartition(int arr[], int n){
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i];
        }

        if(sum % 2 != 0){
            return 0;
        }

        bool tf = subsetSum(arr, n, sum/2);
        int ans = tf == true ? 1 : 0;
        return ans;
    }
};

int main() {
    Solution obj;
    int n;

    cout<<"Enter size of array: ";
    cin>>n;
    cout<<endl;

    int arr[n];

    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans = obj.equalPartition(arr, n);
    string ok = ans == 1 ? "Yes" : "No";
    cout<<"Answer is: "<<ok<<endl;

    return 0;
}
