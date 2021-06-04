//
// Created by Xue on 2021/6/4.
//

#include "bits/stdc++.h"
using namespace std;

int cmp(const void* _a, const void* _b) {
    int a = *(int*)_a, b = *(int*)_b;
    return a - b;
}

bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    for(int i = 0; i < numsSize - 1; i++) {
        if(nums[i] == nums[i + 1]) {
            return true;
        }
    }
    return false;
}

bool containsDuplicate2(vector<int>& nums) {
    unordered_set<int> s;
    for(int  x : nums) {
        if(s.find(x) != s.end()) {
            return true;
        }
        s.insert(x);
    }
    return false;
}
