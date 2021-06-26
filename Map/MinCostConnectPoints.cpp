//
// Created by Xue on 2021/6/26.
//

#include "bits/stdc++.h"
using namespace std;

void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b, *b = tmp;
}

struct Edge {
    int len, x, y;
};

int cmp(struct Edge* a, struct Edge* b) {
    return a->len - b->len;
}

int find(int* f, int x) {
    return f[x] == x ? x : (f[x] = find(f, f[x]));
}

int unionSet(int* f, int* rank, int x, int y) {
    int fx = find(f, x), fy = find(f, y);
    if (fx == fy) {
        return false;
    }
    if (rank[fx] < rank[fy]) {
        swap(&fx, &fy);
    }
    rank[fx] += rank[fy];
    f[fy] = fx;
    return true;
}

int minCostConnectPoints(int** points, int pointsSize, int* pointsColSize) {
    int n = pointsSize;
    struct Edge edges[(n + 1) * n / 2];
    int edgesSize = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            edges[edgesSize].x = i;
            edges[edgesSize].y = j;
            edges[edgesSize++].len = fabs(points[i][0] - points[j][0]) + fabs(points[i][1] - points[j][1]);
        }
    }
    sort(edges, edges + edgesSize, cmp);
    int f[n], rank[n];
    for (int i = 0; i < n; i++) {
        f[i] = i;
        rank[i] = 1;
    }
    int ret = 0, num = 1;
    for (int i = 0; i < edgesSize; i++) {
        if (unionSet(f, rank, edges[i].x, edges[i].y)) {
            ret += edges[i].len;
            num++;
            if (num == n) {
                break;
            }
        }
    }
    return ret;
}









