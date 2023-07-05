#include <bits/stdc++.h> 

class DSU {
public:
    vector<int> rank,parent;
    DSU(int n) {
		parent.resize(n+1);
		rank.resize(n+1);
        for (int i = 1; i <=n; i++) {
            parent[i] = -1;
            rank[i] = -1;
        }
    }

    int findParent(int n) {
        if (parent[n] == -1) return n;
        return parent[n] = findParent(parent[n]);
    }

    bool merge(int x, int y) {
        int sx = findParent(x);
        int sy = findParent(y);
        if (sx != sy) {
            if (rank[sx] > rank[sy]) {
                rank[sx] += rank[sy];
                parent[sy] = sx;
            } else {
                rank[sy] += rank[sx];
                parent[sx] = sy;
            }
            return true;
        }
        return false;
    }
};

static bool compare(const vector<int>& a, const vector<int>& b) {
    return a[2] < b[2];
}

int kruskalMST(int n, int m, vector<vector<int>>& graph) {
    DSU u(n);
    int ans = 0;
   sort(graph.begin(), graph.end(), compare);
    for (const auto& i : graph) {
        bool unite = u.merge(i[0], i[1]);
        if (unite) ans += i[2];
    }
    return ans;
}
