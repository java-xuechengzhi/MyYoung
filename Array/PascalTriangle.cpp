//
// Created by Xue on 2021/6/2.
//

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ret(numRows);
    for(int i = 0; i < numRows; i++) {
        ret[i].resize(i + 1);
        ret[i][0] = ret[i][i] = 1;
        for(int j = 1; j < i; j++) {
            ret[i][j] = ret[i - 1][j] + ret[i - 1][j - 1];
        }
    }
    return ret;
}

int main() {
    vector<vector<int>> ans;
    return 0;
}