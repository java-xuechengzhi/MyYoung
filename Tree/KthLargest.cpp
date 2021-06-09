//
// Created by Xue on 2021/6/8.
//

#include "bits/stdc++.h"
using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

void dfs(struct TreeNode* cur, int* nums, int* index) {
    if(!cur) {
        return;
    }
    dfs(cur->left, nums, index);
    nums[(*index)++] = cur->val;
    dfs(cur->right, nums, index);
}

int kthLargest(struct TreeNode* root, int k) {
    if(!root) {
        return 0;
    }
    int index = 0;
    int* nums = (int*)calloc(10000, sizeof(int));
    dfs(root, nums, &index);
    return nums[index - k];
}

void dfs2(struct TreeNode* cur, int* res, int* index) {
    if(!cur) {
        return;
    }
    dfs2(cur->right, res, index);
    if(*index == 0) {
        return;
    }
    if(--(*index) == 0) {
        *res = cur->val;
    }
    dfs2(cur->left, res, index);
}

int kthLargest2(struct TreeNode* root, int k) {
    if(!root) {
        return 0;
    }
    int res = 0, index = k;
    dfs2(root, &res, &index);
    return res;
}





















