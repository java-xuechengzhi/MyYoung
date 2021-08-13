//
// Created by Xue on 2021/7/8.
//

#include "bits/stdc++.h"
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int length = nums.size();
    vector<int> L(length, 0), R(length, 0);

    vector<int> answer(length);

    L[0] = 1;
    for (int i = 1; i < length; i++) {
        L[i] = nums[i - 1] * L[i - 1];
    }

    // R[i] 为索引 i 右侧所有元素的乘积
    // 对于索引为 'length-1' 的元素，因为右侧没有元素，所以 R[length-1] = 1
    R[length - 1] = 1;
    for (int i = length - 2; i >= 0; i--) {
        R[i] = nums[i + 1] * R[i + 1];
    }


    // 对于索引 i，除 nums[i] 之外其余各元素的乘积就是左侧所有元素的乘积乘以右侧所有元素的乘积
    for (int i = 0; i < length; i++) {
        answer[i] = L[i] * R[i];
    }

    return answer;
}