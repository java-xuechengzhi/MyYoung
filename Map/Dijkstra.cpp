//
// Created by Xue on 2021/6/13.
//

//邻接矩阵实现Dijkstra

#include "bits/stdc++.h"
#define Inf 0x3f3f3f3f
using namespace std;

int Map[1005][1005];
int vis[1005], dis[1005];
int n, m;

void Init() {
    memset(Map, Inf, sizeof(Map));
    for(int i = 1; i <= n; i++) {
        Map[i][i] = 0;
    }
}

void GetMap() {
    int u, v, w;
    for(int t = 1; t <= m; t++) {
        scanf("%d%d%d", &u, &v, &w);
        if(Map[u][v] > w) {
            Map[u][v] = w;
            Map[v][u] = w;
        }
    }
}

void Dijkstra(int u) {
    memset(vis, 0, sizeof(vis));
    for(int t = 1; t <= n; t++) {
        dis[t] = Map[u][t];
    }
    vis[u] = 1;
    for(int t = 1; t < n; t++) {
        int minn = Inf, temp;
        for(int i = 1; i <= n; i++) {
            if(!vis[i] && dis[i] < minn) {
                minn = dis[i];
                temp = i;
            }
        }
        vis[temp] = 1;
        for(int i = 1; i <= n; i++) {
            if(Map[temp][i] + dis[temp] < dis[i]) {
                dis[i] = Map[temp][i] + dis[temp];
            }
        }
    }
}

int main() {
    scanf("%d%d", &m, &n);
    Init();
    GetMap();
    Dijkstra(n);
    printf("%d\n", dis[1]);
    return 0;
}
















