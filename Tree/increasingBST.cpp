#include "bits/stdc++.h"
using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* createTreeNode(int val) {
    struct TreeNode* ret = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    ret->val = val, ret->left = ret->right = NULL;
    return ret;
}

void inorder(struct TreeNode* node, int* res, int* resSize) {
    if (node == NULL) {
        return;
    }
    inorder(node->left, res, resSize);
    res[(*resSize)++] = node->val;
    inorder(node->right, res, resSize);
}

struct TreeNode* increasingBST(struct TreeNode* root) {
    int res[100], resSize = 0;
    inorder(root, res, &resSize);

    struct TreeNode* dummyNode = createTreeNode(-1);
    struct TreeNode* currNode = dummyNode;
    for (int i = 0; i < resSize; i++) {
        currNode->right = createTreeNode(res[i]);
        currNode = currNode->right;
    }
    return dummyNode->right;
}
