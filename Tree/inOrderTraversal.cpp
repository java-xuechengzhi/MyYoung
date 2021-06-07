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

void inorder(struct TreeNode *root, int* res, int* returnSize) {
    if(root == NULL) {
        return;
    }
    inorder(root->left, res, returnSize);
    res[(*returnSize)++] = root->val;
    inorder(root->right, res, returnSize);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int *res = (int*)malloc(sizeof(int) * 2001);
    *returnSize = 0;
    inorder(root, res, returnSize);
    return res;
}