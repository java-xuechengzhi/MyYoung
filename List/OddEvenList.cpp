//
// Created by Xue on 2021/6/26.
//
#include "bits/stdc++.h"
using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* OddEvenList(struct ListNode* head) {
    if(head == NULL) {
        return head;
    }
    struct ListNode* evenHead = head->next;
    struct ListNode* odd = head;
    struct ListNode* even = evenHead;
    while(even != NULL && even->next != NULL) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenHead;
    return head;
}