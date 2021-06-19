//
// Created by Xue on 2021/6/20.
//

#include "bits/stdc++.h"
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
            : val(_val), left(_left), right(_right), next(_next) {}
};

Node* connect(Node* root) {
    if(root == NULL) {
        return root;
    }
    queue<Node*> Q;
    Q.push(root);

    while(!Q.empty()) {
        int size = Q.size();

        for(int i = 0; i < size; i++) {
            Node* node = Q.front();
            Q.pop();

            if(i < size - 1) {
                node->next = Q.front();
            }

            if(node->left != nullptr) {
                Q.push(node->left);
            }
            if(node->right != nullptr) {
                Q.push(node->right);
            }
        }
    }
    return root;
}

Node* connect2(Node* root) {
    if(root == nullptr) {
        return root;
    }
    Node* leftmost = root;

    while(leftmost->left != nullptr) {
        Node* head = leftmost;
        while(head != nullptr) {
            head->left->next = head->right;
            if(head->next != nullptr) {
                head->right->next = head->next->left;
            }
            head = head->next;
        }
        leftmost = leftmost->left;
    }
    return root;
}

















