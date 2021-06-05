//
// Created by Xue on 2021/6/5.
//

#include<bits/stdc++.h>
using namespace std;
#define ENDFLAG -1

typedef struct BSTNode {
    int data;
    BSTNode *lchild, *rchild;
}BSTNode, *BSTree;

BSTree SearchBST(BSTree T, int key) {
    if((!T) || key == T->data) {
        return T;
    } else if(key < T->data) {
        return SearchBST(T->lchild, key);
    } else {
        return SearchBST(T->rchild, key);
    }
}

void InsertBST(BSTree &T, int e) {
    if(!T) {
        BSTree S = new BSTNode;
        S->data = e;
        S->lchild = S->rchild = NULL;
        T = S;
    } else if(e < T->data) {
        InsertBST(T->lchild, e);
    } else if(e > T->data) {
        InsertBST(T->rchild, e);
    }
}

void CreateBST(BSTree &T) {
    T = NULL;
    int e;
    cin >> e;
    while(e != ENDFLAG) {
        InsertBST(T, e);
        cin >> e;
    }
}

void DeleteBST(BSTree &T, char key) {
    BSTree p = T; BSTree f = NULL;
    BSTree q;
    BSTree s;
    if(!T) return;
    while(p) {
        if(p->data == key) break;
        f = p;
        if(p->data > key) {
            p = p->lchild;
        } else
            p = p->rchild;
    }
    if(!p) return;
    if((p->lchild) && (p->rchild)) {
        q = p;
        s = p->lchild;
        while(s->rchild) {
            q = s;
            s = s->rchild;
        }
        p->data = s->data;
        if(q != p) {
            q->rchild = s->lchild;
        } else {
            q->lchild = s->lchild;
        }
        delete s;
    } else {
        if(!p->rchild) {
            q = p;
            p = p->lchild;
        } else if(!p->lchild) {
            q = p;
            p = p->rchild;
        }
        if(!f) {
            T = p;
        } else if(q == f->lchild) {
            f->lchild = p;
        } else {
            f->rchild = p;
        }
        delete q;
    }
}

void InorderTraverse(BSTree &T) {
    if(T) {
        InorderTraverse(T->lchild);
        cout << T->data << "\t";
        InorderTraverse(T->rchild);
    }
}