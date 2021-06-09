//
// Created by Xue on 2021/6/7.
//
#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int maxAncesterDiff(TreeNode* root) {
        dfs(root, root->val, root->val);
        return result;
    }
private:
    int result = 0;
    void dfs(TreeNode* node, int up, int low) {
        if(node == nullptr) {
            return;
        }
        result = max(max(abs(node->val - up), abs(node->val - low)), result);
        up = max(node->val, up);
        low = min(node->val, low);
        dfs(node->left, up, low);
        dfs(node->right, up, low);
    }
};

