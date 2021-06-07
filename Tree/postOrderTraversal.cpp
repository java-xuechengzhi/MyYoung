//
// Created by Xue on 2021/6/7.
//

#include "bits/stdc++.h"
using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

void postOrder(struct TreeNode *root, int *res, int *resSize) {
    if(root == NULL) {
        return;
    }
    postOrder(root->left, res, resSize);
    postOrder(root->right, res, resSize);
    res[(*resSize)++] = root->val;
}

int* postOrderTraversal(struct TreeNode *root, int *returnSize) {
    int *res = (int*)malloc(sizeof(int) * 2001);
    *returnSize = 0;
    postOrder(root, res, returnSize);
    return res;
}












