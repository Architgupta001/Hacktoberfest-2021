#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pll pair<ll, ll>
#define vl vector<ll>
#define pb push_back
#define f(i, a, b) for (ll i = a; i < b; ++i)
#define rev(i, a, b) for (ll i = a; i >= b; --i)
#define print(x) cout << x << endl
#define endl '\n'
#define F first
#define S second
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define to(n) to_string(n)
#define low(v, n) lower_bound(v.begin(), v.end(), n) - v.begin()
#define upp(v, n) upper_bound(v.begin(), v.end(), n) - v.begin()
#define mod 1000000007
#define mex 100005

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s1, s2;
    cin >> s1 >> s2;

    ll a = s1.size();
    ll b = s2.size();

    string r = "";

    ll dp[a + 1][b + 1];
    memset(dp, 0, sizeof(dp));

    f(i, 1, a + 1)
    {
        f(j, 1, b + 1)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    while (a > 0 && b > 0)
    {
        if (s1[a - 1] == s2[b - 1])
        {
            r.pb(s1[a - 1]);
            a--;
            b--;
        }
        else if (dp[a - 1][b] > dp[a][b - 1])
        {
            a--;
        }
        else
        {
            b--;
        }
    }

    reverse(r.begin(), r.end());
    print(r);
    return 0;
}