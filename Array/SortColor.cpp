//
// Created by Xue on 2021/6/2.
//

#include "bits/stdc++.h"
using namespace std;

void swap(int *a, int *b) {
    int t = *a;
    *a = *b, *b = t;
}

void sortColors(int* nums, int numsSize) {
    int ptr = 0;
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] == 0) {
            swap(&nums[i], &nums[ptr]);
            ++ptr;
        }
    }
    for(int i = ptr; i < numsSize; i++) {
        if(nums[i] == 1) {
            swap(&nums[i], &nums[ptr]);
            ++ptr;
        }
    }
}

void sortColors2(int* nums, int numsSize) {
    int p0 = 0, p1 = 0;
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] == 1) {
            swap(&nums[i], &nums[p1]);
            ++p1;
        } else if(nums[i] == 0) {
            swap(&nums[i], &nums[p0]);
            if(p0 < p1) {
                swap(&nums[i], &nums[p1]);
            }
            ++p0;
            ++p1;
        }
    }
}

void sortColors3(int *nums, int numsSize) {
    int p0 = 0, p2 = numsSize - 1;
    for(int i = 0; i <= p2; i++) {
        while(i <= p2 && nums[i] == 2) {
            swap(&nums[i], &nums[p2]);
            --p2;
        }
        if(nums[i] == 0) {
            swap(&nums[i], &nums[p0]);
            ++p0;
        }
    }
}









