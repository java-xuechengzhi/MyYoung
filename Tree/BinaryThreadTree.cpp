//
// Created by Xue on 2021/6/13.
//

#include "bits/stdc++.h"
#include "windows.h"
using namespace std;

typedef enum {Linked, Thread} PointTag;
typedef struct Node {
    char data;
    struct Node* left;
    struct Node* right;
    PointTag leftTag;
    PointTag rightTag;
}BitNode, *BiTree;

void CreateTree(BiTree* T) {
    char ch = 0;
    scanf("%c", &ch);
    if(ch == ' ') {
        *T = NULL;
    } else {
        *T = (BiTree) malloc(sizeof(BitNode));
        if(!(*T)) {
            exit(-1);
        }
        (*T)->data = ch;
        CreateTree(&((*T)->left));
        CreateTree(&((*T)->right));
    }
}

BiTree pre;
void InThreading(BiTree T) {
    if(T) {
        InThreading(T->left);
        if(!T->left) {
            T->leftTag = Thread;
            T->left = pre;
        } else {
            T->leftTag = Linked;
        }
        if(!pre->right) {
            pre->rightTag = Thread;
            pre->right = T;
        } else {
            pre->rightTag = Linked;
        }
        pre = T;
        InThreading(T->right);
    }
}

void InOrderThreading(BiTree *head, BiTree T) {
    if(!T) {
        return;
    }
    *head = (BiTree)malloc(sizeof(BitNode));
    if(!(*head)) {
        exit(-1);
    }
    (*head)->leftTag = Linked;
    (*head)->rightTag = Thread;
    (*head)->left = T;
    (*head)->right = *head;

    pre = *head;

    InThreading(T);

    pre->rightTag = Thread;
    pre->right = *head;
    (*head)->right = pre;

}

void InOrderTraverse(BiTree head) {
    BiTree p = head->left;
    while(p != head) {
        while(p->leftTag == Linked) {
            p = p->left;
        }
        printf("%2c", p->data);
        while(p->rightTag == Thread && p->right != head) {
            p = p->right;
            printf("%c", p->data);
        }
        p = p->right;
    }
    printf("\n");
}

BiTree InOrderPre(BiTree T) {
    if(T->leftTag == Thread) {
        return T->left;
    }
    BiTree p = T->left;
    while(p->rightTag == Linked) {
        p = p->right;
    }
    return p;
}

BiTree InOrderNext(BiTree T) {
    if(T->rightTag == Thread) {
        return T->right;
    }

    BiTree p = T->right;
    while(p->leftTag == Linked) {
        p = p->left;
    }
    return p;
}

void Destroy(BiTree* head) {
    BiTree p = (*head)->left;
    BiTree adjust = p;
    while(p != *head) {
        while(p->leftTag == Linked) {
            p = p->left;
        }
        while(p->rightTag == Thread && p->right != *head) {
            adjust = p;
            p = p->right;
            free(adjust);
        }

        adjust = p;
        p = p->right;
        free(adjust);
    }
    free(*head);
    *head = NULL;
    adjust = p = NULL;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main() {
    BiTree T1, head;
    CreateTree(&T1);
    InOrderThreading(&head, T1);
    printf("**************************\n");
    InOrderTraverse(head);
    Destroy(&head);
    printf("**************************\n");
    if (!head) {
        printf("OK\n");
    }
    system("pause");
    return 0;
}






