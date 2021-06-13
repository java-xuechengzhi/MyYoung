//
// Created by Xue on 2021/6/13.
//

#include "bits/stdc++.h"
using namespace std;
#define Maxn 0x3f3f3f3f

void Dijkstra();
int e[10][10];
int vis[10];
int dis[10];
int n, m;
int min1 = Maxn;
int u = 0;

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == j) {
                e[i][j] = 0;
            } else {
                e[i][j] = Maxn;
            }
        }
    }
    for(int i = 1; i <= m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        e[a][b] = c;
    }
    for(int i = 1; i <= n; i++) {
        dis[i] = e[1][i];
    }
    vis[1] = 1;
    Dijkstra();

    for(int i = 1; i <= n; i++ {
        cout << dis[i];
    };
    system("pause");
    return 0;
}

void Dijkstra() {
    for(int i = 1; i <= n; i++) {
        min1 = Maxn;
        for(int j = 1; j <= n; j++) {
            if(vis[j] == 0 && dis[j] < min1) {
                min1 = dis[j];
                u = j;
            }
        }
    }
    vis[u] = 1;
    for(int v = 1; v <= n; v++) {
        if(e[u][v] < Maxn) {
            if(dis[v] < dis[u] + e[u][v]) {
                dis[v] = dis[u] + e[u][v];
            }
        }
    }
}







