
// finding the position of the first and last number of the given element

#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );

int main()
{
    int t; // no of testcases you gonna run
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x; // n is the number of elements in the array and x is the given element whose first and last position needs to be determined
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


// } Driver Code Ends


vector<int> find(int arr[], int n , int x )
{   vector<int> v;
    int start=0;
    int end =n-1;
    
    while(start<n){
        if(arr[start]==x){
            v.push_back(start);
            break;
        }
        start++;
    }
    while(end>0){
        if(arr[end]==x){
            v.push_back(end);
            break;
        }
        end--;
    }
    int a=-1;
    if(v.empty()){
         v.push_back(a);
         v.push_back(a);
         return v;
    }
    else{
    return v;
    }
}