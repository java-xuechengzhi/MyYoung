//
// Created by Xue on 2021/6/6.
//
#include "bits/stdc++.h"
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummy = new ListNode(0, head);
    stack<ListNode*> stk;
    ListNode* cur = dummy;
    while (cur) {
        stk.push(cur);
        cur = cur->next;
    }
    for (int i = 0; i < n; ++i) {
        stk.pop();
    }
    ListNode* prev = stk.top();
    prev->next = prev->next->next;
    ListNode* ans = dummy->next;
    delete dummy;
    return ans;
}
