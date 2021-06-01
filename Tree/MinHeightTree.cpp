//
// Created by Xue on 2021/6/1.
//

#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* buildBST(int* nums, int left, int right);

struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    return buildBST(nums, 0, numsSize - 1);
}

struct TreeNode* buildBST(int* nums, int left, int right) {
    if(left > right)
        return NULL;
    else {
        int mid = ceil((float)(left + right) / 2);
        struct TreeNode* pNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        pNode->val = nums[mid];
        pNode->left = buildBST(nums, left, mid - 1);
        pNode->right = buildBST(nums, mid + 1, right);
        return pNode;
    }
}

int main() {
    return 0;
}