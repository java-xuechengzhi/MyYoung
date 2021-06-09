//
// Created by Xue on 2021/6/7.
//
#include "bits/stdc++.h"
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
    int ans = 0;
    pair<int, int> help(TreeNode* root) {
        int mn = root->val, mx = root->val;
        if(root->left) {
            auto p = help(root->left);
            ans = max({ans, abs(root->val - p.first), abs(root->val - p.second)});
            mn = min(mn, p.first);
            mx = max(mx, p.second);
        }
        if(root->right) {
            auto p = help(root->right);
            ans = max({ans, abs(root->val - p.first), abs(root->val - p.second)});
            mn = min(mn, p.first);
            mx = max(mx, p.second);
        }
        return {mn, mx};
    }





    int maxAncestorDiff(TreeNode* root) {
        if(root == nullptr) return 0;
        help(root);
        return ans;
    }
};