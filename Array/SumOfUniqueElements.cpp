//
// Created by Xue on 2021/6/3.
//

#include "bits/stdc++.h"
using namespace std;

int SumOfUniqueElements(int* nums, int numsSize) {
    int sum = 0;
    int freq[101] = {0};
    for(int i = 0; i < numsSize; i++) {
        freq[nums[i]]++;
    }
    for(int i = 0; i < numsSize; i++) {
        if(freq[nums[i]] == 1) {
            sum += nums[i];
        }
    }
    return sum;
}