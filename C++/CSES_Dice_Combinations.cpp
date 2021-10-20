/*Your task is to count the number of ways to construct sum n by throwing a dice one or more times. Each throw produces an outcome between 1 and 6.

For example, if n=3, there are 4 ways:
1+1+1
1+2
2+1
3
Input

The only input line has an integer n.

Output

Print the number of ways modulo 10^9+7.

Constraints
1≤n≤106
Example

Input:
3

Output:
4
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007;


ll dp[1000001];

ll solve(ll n)
{
    for(ll i = 7;i<=n;i++)
    {
        dp[i] = (dp[i-1]+ dp[i-2]+ dp[i-3]+ dp[i-4]+ dp[i-5] + dp[i-6] )%mod;
    }
    return dp[n];
}

int main()
{
    ll sum;
    cin>>sum;

    dp[0]=1, dp[1]=1,dp[2]=2,dp[3]=4,dp[4]=8,dp[5]=16,dp[6]=32;

    cout<<solve(sum);

}
