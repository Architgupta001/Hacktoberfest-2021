// Problem : Given an array of integers of size N find the length & the sequence of the Longest Increasing Subsequence.
// Time Complexity : O(N*Log(N)).
// Topics : Dynamic Programming & Binary Search (STL)

#include <bits/stdc++.h>
using namespace std;

void LIS(int arr[], int n){                                                     // Beginning of the function
    vector <int> dp(1,arr[0]);                                                  // Initializing a dynamic array of size 1 and value as arr[0]
    for(int i=1; i<n; i++){                                                         
        if(arr[i] =< dp.back()){                                                 // If the current element in array is less than or equal to the last element of vector dp
            int j = lower_bound(dp.begin(),dp.end(),arr[i]) - dp.begin();       // then we find the lowest integer in the vector dp with value more than or equal to arr[i]
            dp[j] = arr[i];                                                     // and replace that integer with arr[i] using lower_bound (binary search)
        }
        else{
            dp.push_back(arr[i]);                                               // If the current element in array is not less than the last element of vector dp
        }                                                                       // we simply add arr[i] to the last of the vector dp
    }
    cout<<dp.size()<<"\n";                                                      // Prints the length & the sequence of the Longest Increasing Subsequence
    for(int i=0; i<dp.size(); i++){                                             // This Program has worst case time complexity of N*Log(N) 
        cout<<dp[i]<<" ";
    }
    return;
}  

int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);              // for fast input-output
    int n;                                                                      // Size of the array
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];                                                        
    }
    LIS(arr,n);                                                                 // Function to solve the problem
}