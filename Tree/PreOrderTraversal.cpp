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

void PreOrder(struct TreeNode *root, int *res, int *returnSize) {
    if(root == NULL) {
        return;
    }
    res[(*returnSize)++] = root->val;
    PreOrder(root->left, res, returnSize);
    PreOrder(root->right, res, returnSize);

}

int* PreOrderTraversal(struct TreeNode *root, int *returnSize) {
    int *res = (int*) malloc(sizeof(int) * 100);
    *returnSize = 0;
    PreOrder(root, res, returnSize);
    return res;
}