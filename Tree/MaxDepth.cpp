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

int MaxDepth(struct TreeNode* root) {
    if(root == NULL) {
        return 0;
    }

    int lenLeft = MaxDepth(root->left);
    int lenRight = MaxDepth(root->right);
    return lenLeft > lenRight ? lenLeft + 1 : lenRight + 1;
}

int MaxDepth2(struct TreeNode* root) {
    if(!root) {
        return 0;
    }
    struct TreeNode** queue = (struct TreeNode**)malloc(sizeof(struct TreeNode*) * 1000);
    int head = 0, rear = 0;
    queue[rear++] = root;
    int depth = 0;
    while(head < rear) {
        int curRear = rear;
        depth++;
        for(; head < curRear; head++) {
            if(queue[head]->left) {
                queue[rear++] = queue[head]->left;
            }
            if(queue[head]->right) {
                queue[rear++] = queue[head]->right;
            }
        }
    }
    return depth;
}

int MaxDepth3(struct TreeNode* root) {
    if(!root) {
        return 0;
    }
    struct TreeNode** queue = (struct TreeNode**)malloc(sizeof(struct TreeNode*) * 1000);
    int head = 0, rear = 0;
    queue[rear++] = root;
    int depth = 0;
    while(head < rear) {
        int curRear = rear;
        depth++;
        for(; head < curRear; head++) {
            if(queue[head]->left) {
                queue[rear++] = queue[head]->left;
            }
            if(queue[head]->right) {
                queue[rear++] = queue[head]->right;
            }
        }
    }
    return depth;
}



