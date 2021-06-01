//
// Created by Xue on 2021/6/1.
//

#include "bits/stdc++.h"
using namespace std;
#define MAX 201

int Hash[MAX];

int cmp(const void *a, const void *b) {
    int tmpa = *(int *)a + 100;
    int tmpb = *(int *)b + 100;

    if(Hash[tmpb] == Hash[tmpa]) {
        return tmpb - tmpa;
    }
    return Hash[tmpa] - Hash[tmpb];
}

int *frequencySort(int *nums, int numsSize, int *returnSize) {
    int i;
    memset(Hash, 0, sizeof(int) * MAX);
    for(i = 0; i < numsSize; i++) {
        Hash[nums[i] + 100]++;
    }
    qsort(nums, numsSize, sizeof(int), cmp);
    *returnSize = numsSize;
    return nums;
}
