//
// Created by Xue on 2021/6/13.
//
#include "bits/stdc++.h"
using namespace std;

int n, m, tot = 0, k = 0;
int fat[200010];
struct node{
    int from, to, dis;
}edge[200010];

bool cmp(const node &a, const node &b) {
    return a.dis < b.dis;
}

int father(int x) {
    if(fat[x] != x) {
        return father(fat[x]);
    } else {
        return x;
    }
}

void Union(int x, int y) {
    fat[father(y)] = father(x);
}

int main() {
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; i++) {
        scanf("%d%d%d", &edge[i].from, &edge[i].to, &edge[i].dis);
    }
    for(int i = 1; i <= n; i++) fat[i] = i;
    sort(edge + 1, edge + 1 + m, cmp);
    for(int i = 1; i <= m; i++) {
        if(k == n - 1) break;
        if(father(edge[i].from) != father(edge[i].to)) {
            Union(edge[i].from, edge[i].to);
            tot += edge[i].dis;
            k++;
        }
    }
    printf("%d", tot);
    return 0;
}










