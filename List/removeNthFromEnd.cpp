//
// Created by Xue on 2021/6/6.
//
#include "bits/stdc++.h"
using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* dummy = (struct ListNode*) malloc(sizeof(struct ListNode));
    dummy->val = 0, dummy->next = head;
    struct ListNode* first = head;
    struct ListNode* second = dummy;
    for(int i = 0; i < n; i++) {
        first = first->next;
    }
    while(first) {
        first = first->next;
        second = second->next;
    }
    second->next = second->next->next;
    struct ListNode* ans = dummy->next;
    free(dummy);
    return ans;
}

int getLength(struct ListNode* head) {
    int length = 0;
    while(head) {
        ++length;
        head = head->next;
    }
    return length;
}

struct ListNode* removeNthFromEnd2(struct ListNode* head, int n) {
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->val = 0, dummy->next = head;
    int length = getLength(head);
    struct ListNode* cur = dummy;
    for(int i = 1; i < length - n + 1; i++) {
        cur = cur->next;
    }
    cur->next = cur->next->next;
    struct ListNode* ans = dummy->next;
    free(dummy);
    return ans;
}