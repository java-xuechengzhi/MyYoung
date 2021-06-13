#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<int>& postOrder, int start, int end) {
    if(start >= end) {
        return true;
    }
    int p = start;
    int rootVal = postOrder[end];
    while(postOrder[p] < rootVal) {
        ++p;
    }
    int leftEnd = p + 1;

    while(postOrder[p] > rootVal) {
        ++p;
    }
    return p == end && dfs(postOrder, start, leftEnd) && dfs(postOrder, leftEnd + 1, end - 1);
}

bool verify(vector<int>& postOrder) {
    return dfs(postOrder, 0, postOrder.size() - 1);
}



vector<int> res;

bool verify2(vector<int>& postOrder) {
    return dfs2()
}



















































