//
// Created by Xue on 2021/6/10.
//

#include "bits/stdc++.h"
using namespace std;

typedef struct BiTNode {
    struct BiTNode *lchild;
    struct BiTNode *rchild;
    int data;

} BiTNode, *BiTree;

void visit(BiTNode *node) {
    printf("-->%d\t", node->data);
}

void preOrderTraverseNonrecursion(BiTree Tree) {
    if(Tree == nullptr) {
        return;
    }
    if(Tree) {
        BiTNode *stack[100];
        int top = -1;
        BiTNode *p = Tree;
        stack[++top] = p;
        while(top != -1) {
            p = stack[top--];
            visit(p);
            if(p->rchild) {
                stack[++top] = p->rchild;
            }
            if(p->lchild) {
                stack[++top] = p->lchild;
            }
        }
    }
}

void inOrderTraverseNonrecursion(BiTree Tree) {
    if(Tree == nullptr) {
        return;
    }
    BiTNode *stack[100];
    int top = -1;
    BiTNode *p = Tree;
    while(p != nullptr || top != -1) {
        if(p) {
            stack[++top] = p;
            p = p->lchild;
        } else {
            p = stack[top--];
            visit(p);
            p = p->rchild;
        }
    }
}

void postOrderTraverseNonrecursion(BiTree Tree) {
    if(Tree == nullptr) {
        return;
    }
    BiTNode *stack1[100];
    BiTNode *stack2[100];

    int top1 = -1, top2 = -1;
    BiTNode *p = Tree;
    stack1[++top1] = p;
    while(top1 != -1) {
        p = stack1[top1--];
        stack2[top2++] = p;

        if(p->lchild) {
            stack1[++top1] = p->lchild;
        }
        if(p->rchild) {
            stack1[++top1] = p->rchild;
        }
    }
    while(top2 != -1) {
        p = stack2[--top2];
        visit(p);
    }
}
















