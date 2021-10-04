#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 6;

vector<int> parent(N);
vector<int> sz(N);

void make_set(int v) {
    parent[v] = v;
    sz[v] = 1;
}

int find_set(int v) {
    if (parent[v] == v) return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (sz[a] > sz[b]) {
            parent[b] = a;
            sz[a] += sz[b];
        }
        else {
            parent[a] = b;
            sz[b] += sz[a];
        }
    }
}

int main() {
    for (int i = 0; i < N; i++) {
        make_set(i);
    }
    int n = 6;
    vector<vector<int>> edges;
    edges.push_back({ 0,1 });
    edges.push_back({ 1,2 });
    edges.push_back({ 2,3 });
    edges.push_back({ 3,4 });
    edges.push_back({ 4,5 });
    edges.push_back({ 3,0 });
    
    bool cycle = 0;
    for (auto ele : edges) {
        int u = ele[0];
        int v = ele[1];
        int x = find_set(u);
        int y = find_set(v);
        if (x == y) {
            cycle = 1;
        }
        else {
            union_sets(u, v);
        }
    }
    if (cycle) {
        cout << "Cycle present\n";
    }
    else {
        cout << "Cycle not present\n";
    }
    return 0;
}
