//
// Created by Xue on 2021/6/6.
//

/*
 * 递归按照数组的开始位置 start 和结束位置 end
递归结束 start>= end 表示只有一个结点，必然没问题，直接返回true
分别按照大小比较去找到左子树的结束位置和右子树的结束位置
判断右子树的结束位置是否正好是根节点，否则就是异常
正常情况下，继续去拆分成左右子树去递归调用
 */

#include "bits/stdc++.h"
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

bool verifyPostOrder(vector<int>& postOrder) {
    return dfs(postOrder, 0 , postOrder.size() - 1);
}

vector<int> res;

bool dfs2(int l, int r) {
    if(l >= r) {
        return true;
    }
    int root = res[r];
    int k = l;
    while(k < r && res[k] < root) k++;
    for(int i = k; i < r; i++) {
        if(res[k] < root) {
            return false;
        }
    }
    return dfs2(l, k - 1) && dfs2(k, r - 1);
}

bool verify2(vector<int>& postOrder) {
    res = postOrder;
    return dfs2(0, postOrder.size() - 1);
}





