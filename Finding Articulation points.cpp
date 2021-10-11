/*Articulation points are those vertices whose removal increases 
number of connected components
1. Endpoints of bridges are articulation points if their degree>=2
2. Articulation poit may or may not be end point of a bridge.

let in[v] denote entry time for node v. We will introduce an array low[v] which will let us check the fact for each vertex v. 
low[v] is the minimum of in[v], the entry times tin[p] for each node p that is connected to node v via a back-edge (v,p).So, 
we will minimise the in[v].

there is a back edge from vertex v or one of its descendants to one of its ancestors if and only if vertex v has a child to for which low[to]<tin[v]. 
If low[to]=in[v], the back edge comes directly to v, otherwise it comes to one of the ancestors of v.

Thus, the vertex v in the DFS tree is an articulation point if and only if low[to]≥in[v].

*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pll pair<ll, ll>
#define vl vector<ll>
#define pb push_back
#define pp pop_back
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
vl v[mex];
ll vis[mex] = {0};
ll in[mex] = {0};
ll low[mex] = {0};
ll timer = 0;
set<ll> cutpoint;

void dfs(ll node, ll parent)
{
    vis[node] = 1;
    in[node] = timer;
    low[node] = timer;
    timer++;

    ll children_count = 0; //counting subtrees

    for (auto child : v[node])
    {
        if (child == parent)
        {
            continue;
        }

        if (vis[child] == 1) // means this is back edge
        {
            low[node] = min(low[node], in[child]);
        }
        else //this will be the case of forward edge
        {

            dfs(child, node);
            low[node] = min(low[child], low[node]);
            if (low[child] >= in[node] && parent != -1) //survival of subtree
            {
                cutpoint.insert(node);
            }
            children_count++;
        }
    }
    if (parent == -1 && children_count > 1)
    {
        cutpoint.insert(node);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;
    f(i, 0, n)
    {
        if (vis[i] == 0)
        {
            dfs(i);
        }
    }

    return 0;
}
