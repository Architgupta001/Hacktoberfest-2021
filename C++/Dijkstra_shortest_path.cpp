#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    n = 4, m = 7;
    vector<int> dist(n + 1, 1e7);
    vector<vector<pair<int, int>>> graph(n + 1);

    graph[0].push_back({ 1,3 });
    graph[0].push_back({ 4,2 });
    graph[1].push_back({ 0,3 });
    graph[1].push_back({ 4,3 });
    graph[1].push_back({ 3,2 });
    graph[1].push_back({ 2,1 });
    graph[2].push_back({ 1,1 });
    graph[2].push_back({ 3,5 });
    graph[3].push_back({ 2,5 });
    graph[3].push_back({ 1,2 });
    graph[3].push_back({ 4,4 });
    graph[4].push_back({ 0,2 });
    graph[4].push_back({ 1,3 });
    graph[4].push_back({ 4,3 });
    
    int source = 0;

    dist[source] = 0;
    set<pair<int, int>> s;
    s.insert({ 0,source });

    while (!s.empty()) {
        auto x = *(s.begin());
        s.erase(x);
        for (auto ele : graph[x.second]) {
            if (dist[ele.first] > dist[x.second] + ele.second) {
                s.erase({ dist[ele.first],ele.first });
                dist[ele.first] = dist[x.second] + ele.second;
                s.insert({ dist[ele.first],ele.first });
            }
        }
    }

    for (int i = 0; i <= n; i++) {
        cout << dist[i] << " ";
    }
    return 0;
}
