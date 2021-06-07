//
// Created by Xue on 2021/6/6.
//

#include "bits/stdc++.h"
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<vector<int>> ans;
vector<int> path;

void dfs(TreeNode* root, int target);

vector<vector<int>> pathSum(TreeNode* root, int target) {
    dfs(root, target);
    return ans;
}

void dfs(TreeNode* root, int target) {
    if(!root) return;
    path.push_back(root->val);
    target -= root->val;
    if(!root->left && !root->right && !target) ans.push_back(path);
    dfs(root->left, target);
    dfs(root->right, target);
    path.pop_back();
}