//
// Created by Xue on 2021/7/3.
//

#include "bits/stdc++.h"
using namespace std;

int binarySearch(int* nums, int numsSize, int target, bool lower) {
    int left = 0, right = numsSize - 1, ans = numsSize;
    while(left <= right) {
        int mid = (left + right) / 2;
        if(nums[mid] > target || (lower && nums[mid] >= target)) {
            right = mid - 1;
            ans = mid;
        } else {
            left = mid + 1;
        }
    }
    return ans;
}

int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int leftIndex = binarySearch(nums, numsSize, target, true);
    int rightIndex = binarySearch(nums, numsSize, target, false) - 1;
    int* ret = (int*)malloc(sizeof(int) * 2);
    *returnSize = 2;
    if(leftIndex <= rightIndex && rightIndex < numsSize && nums[leftIndex] == target) {
        ret[0] = leftIndex, ret[1] = rightIndex;
        return ret;
    }
    ret[0] = -1, ret[1] = -1;
    return ret;
}















