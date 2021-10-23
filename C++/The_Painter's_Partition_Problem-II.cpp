// Problem Link   https://practice.geeksforgeeks.org/problems/the-painters-partition-problem1535/1
#include <bits/stdc++.h>
using namespace std;
class Solution
{
  public:

  bool ck(int* arr, int n, int k, long long int m){
        long long int sum = 0;
        int cn = 1;
        for(int i = 0; i<n; i++){
            if(arr[i]>m)
                return false;
            if(sum+arr[i]>m){
                cn++;
                sum = arr[i];
                if(cn>k)
                    return false;
            }
            else
                sum += arr[i];
        }
        if(cn<=k)
            return true;
    }

    long long minTime(int arr[], int n, int k)
    {
        // return minimum time
        long long int l = 0, h = 0;
        for(int i = 0; i<n; i++){
            h += arr[i];
            l = max(l, (long long)arr[i]);
        }
        long long ans = -1;
        while(l<=h){
            long long int mid = (l+h)/2;
            if(ck(arr, n, k, mid)){
                ans = mid;
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return ans;
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;

		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
