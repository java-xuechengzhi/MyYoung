//
// Created by Xue on 2021/6/1.
//

#include "bits/stdc++.h"
using namespace std;

int* runningSum(int* nums, int numsSize, int* returnSize) {
    int* res = (int*)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;
    res[0] = nums[0];
    for(int i = 1; i < numsSize; i++) {
        res[i] = nums[i] + res[i - 1];
    }
    return res;

}