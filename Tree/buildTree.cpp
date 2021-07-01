//
// Created by Xue on 2021/6/29.
//
#include "bits/stdc++.h"
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
unordered_map<int, int> index;
TreeNode* buildTree(const vector<int>& preorder, const vector<int>& inorder, int preorder_left, int preorder_right, int inorder_left, int inorder_right) {
    if(preorder_left > preorder_right) {
        return nullptr;
    }
    int preorder_root = preorder_left;
    int inorder_root = index[preorder[preorder_root]];
    TreeNode* root = new TreeNode(preorder[preorder_root]);
    int size_left_subtree = inorder_root - inorder_left;
    root->left = buildTree(preorder, inorder, preorder_left + 1, preorder_left + size_left_subtree, inorder_left, inorder_root - 1);
    root->right = buildTree(preorder, inorder, preorder_left + size_left_subtree + 1, preorder_right, inorder_root + 1, inorder_right);
    return root;
}

TreeNode* MyBuildTree(vector<int>& preorder, vector<int>& inorder) {
    int n = preorder.size();
    for(int i = 0; i < n; i++) {
        index[inorder[i]] = i;
    }
    return buildTree(preorder, inorder, 0, n - 1, 0, n - 1);
}

/*
 * 我们用一个栈和一个指针辅助进行二叉树的构造。初始时栈中存放了根节点（前序遍历的第一个节点），指针指向中序遍历的第一个节点；
我们依次枚举前序遍历中除了第一个节点以外的每个节点。如果 index 恰好指向栈顶节点，那么我们不断地弹出栈顶节点并向右移动 index，
 并将当前节点作为最后一个弹出的节点的右儿子；如果 index 和栈顶节点不同，我们将当前节点作为栈顶节点的左儿子；
无论是哪一种情况，我们最后都将当前的节点入栈。
 */

TreeNode* buildTree2(vector<int>& preorder, vector<int>& inorder) {
    if(!preorder.size()) {
        return nullptr;
    }
    TreeNode* root = new TreeNode(preorder[0]);
    stack<TreeNode*> stk;
    stk.push(root);
    int inorderIndex = 0;
    for(int i = 1; i < preorder.size(); i++) {
        int preorderVal = preorder[i];
        TreeNode* node = stk.top();
        if(node->val != inorder[inorderIndex]) {
            node->left = new TreeNode(preorderVal);
            stk.push(node->left);
        } else {
            while(!stk.empty() && stk.top()->val == inorder[inorderIndex]) {
                node = stk.top();
                stk.pop();
                ++inorderIndex;
            }
            node->right = new TreeNode(preorderVal);
            stk.push(node->right);
        }
    }
    return root;
}

















