//
// Created by Xue on 2021/6/29.
//

#include <cstdlib>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* partition(struct ListNode* head, int x){
    struct ListNode* small = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* smallHead =small;
    struct ListNode* large = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* largeHead = large;
    while(head != NULL) {
        if(head->val < x) {
            small->next = head;
            small = small->next;
        } else {
            large->next = head;
            large = large->next;
        }
        head = head->next;
    }
    large->next = NULL;
    small->next = largeHead->next;
    return smallHead->next;
}