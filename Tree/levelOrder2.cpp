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


/*
 *vector<vector<int>> levelOrder(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);
    //...
    while(q.size())
    {
        int size=q.size();
        //...
        for(int i=0;i<size;i++)
        {
            TreeNode* rt=q.front();q.pop();
            //...
            if(rt->left) q.push(rt->left);
            if(rt->right) q.push(rt->right);
        }
    }
    //return ...
}

 bfs模板

 * */

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>> res;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()) {
            int cnt = que.size();
            vector<int> level;
            while(cnt) {
                auto node = que.front();
                if(node->left) que.push(node->left);
                if(node->right) que.push(node->right);
                level.push_back(node->val);
                que.pop();
                cnt--;
            }
            res.push_back(level);
        }
        return res;
    }

    vector<vector<int>> levelOrder3(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>> res;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()) {
            int cnt = que.size();
            vector<int> level;
            while(cnt) {
                auto node = que.front();
                if(node->left) que.push(node->left);
                if(node->right) que.push(node->right);
                level.push_back(node->val);
                que.pop();
                cnt--;
            }
            res.push_back(level);
        }
        return res;
    }
};