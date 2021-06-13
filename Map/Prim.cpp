//
// Created by Xue on 2021/6/13.
//

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
const int max1 = 2e3 + 10;
const int INF = 1 << 3;
int dir[4][2] = {1, 0, 0, 1, -1, 0, 0, -1};
int T, n, m, x;
int Map[max1][max1];
int LowCost[max1], mst[max1];

void prim(int u) {
    int sum_mst = 0;
    for(int i = 1; i <= n; i++) {
        LowCost[i] = Map[u][i];
        mst[i] = u;
    }
    mst[u] = -1;
    for(int i = 1; i < n; i++) {
        int minn = INF;
        int v = -1;
        for(int j = 1; j <= n; j++) {
            if(mst[j] != -1 && LowCost[j] < minn) {
                v = j;
                minn = LowCost[j];
            }
        }
        if(v != -1) {
            printf("%d %d %d\n", mst[v], v, LowCost[v]);
            mst[v] = -1;
            sum_mst += LowCost[v];
            for(int j = 1; j <= n; j++) {
                if(mst[j] != -1 && LowCost[j] > Map[v][j]) {
                    LowCost[j] = Map[v][j];
                    mst[j] = v;
                }
            }
        }
    }
    printf("weight of mst is %d\n", sum_mst);
}



int main() {
    cin >> n >> m;
    memset(Map, 0, sizeof(Map));
    for(int i = 1; i <= m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        Map[u][v] = Map[v][u] = w;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == j) Map[i][j] = 0;
            else if(!Map[i][j]) {
                Map[i][j] = INF;
            }
        }
    }
    prim(1);
    return 0;
}