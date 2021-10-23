/* This is the solution to the problem towers of the CSES Problem set.
Link : https://cses.fi/problemset/task/1073 */

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int k;

    vector<int> tower;
    for(int i = 0; i<n; i++){
        cin>>k;

        auto p = upper_bound(tower.begin(), tower.end(), k);
        if(p!=tower.end())
            tower[p-tower.begin()] = k;
        else    tower.push_back(k);     
    }
    cout << tower.size();
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    
    return 0;
}