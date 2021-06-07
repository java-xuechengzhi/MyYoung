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

vector<int> get_c(vector<TreeNode*> root) {
    vector<int> res;
    for(auto &x : root) {
        res.push_back(x->val);
    }
    return res;
}


vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> res;
    if(!root) {
        return res;
    }
    vector<TreeNode*> level;
    level.push_back(root);
    res.push_back(get_c(level));
    bool flag = true;
    while(true) {
        vector<TreeNode*> newLevel;
        for(auto &u : level) {
            if(u->left) newLevel.push_back(u->left);
            if(u->right) newLevel.push_back(u->right);
        }
        if(newLevel.size()) {
            vector<int> temp = get_c(newLevel);
            if(flag) {
                reverse(temp.begin(), temp.end());
            }
            res.push_back(temp);
            level = newLevel;
            flag = !flag;
        } else {
            break;
        }
    }
    return res;
}















