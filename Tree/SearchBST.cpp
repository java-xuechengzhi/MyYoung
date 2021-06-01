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

struct TreeNode* searchBST(struct TreeNode* root, int val) {
    if(!root) {
        return NULL;
    }
    if(root->val == val) {
        return root;
    } else if(root->val < val) {
        if(root->right) {
            return searchBST(root->right, val);
        } else {
            return NULL;
        }
    } else {
        if(root->left) {
            return searchBST(root->left, val);
        } else {
            return NULL;
        }
    }
}

struct TreeNode* searchBST2(struct TreeNode* root, int val) {
    if(!root) {
        return NULL;
    } else {
        while(root) {
            if(val > root->val) {
                root = root->right;
            } else if(val < root->val) {
                root = root->left;
            } else if(val == root->val) {
                return root;
            }
        }
    }
    return NULL;
}