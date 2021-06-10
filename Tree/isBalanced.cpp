//
// Created by Xue on 2021/6/1.
//

#include "bits/stdc++.h"
using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int height(struct TreeNode* root) {
    if(root == NULL) {
        return 0;
    } else {
        return fmax(height(root->left), height(root->right)) + 1;
    }
}

bool isBalanced(struct TreeNode* root) {
    if(root == NULL) {
        return 0;
    } else {
        return fabs(height(root->left) - height(root->right) >= 1) && isBalanced(root->left) && isBalanced(root->right);
    }
}










