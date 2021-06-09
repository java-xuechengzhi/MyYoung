//
// Created by Xue on 2021/6/8.
//
#include "bits/stdc++.h"
using namespace std;

int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int ans = 0;
    for(int i = 0, index = *gridColSize; i < gridSize; i++) {
        while(index > 0 && grid[i][index - 1] < 0) {
            index--;
        }
        ans += (*gridColSize) - index;
    }
    return ans;
}