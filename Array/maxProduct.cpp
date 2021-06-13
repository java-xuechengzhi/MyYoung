//
// Created by Xue on 2021/6/7.
//

#include "bits/stdc++.h"
using namespace std;

int maxProduct(vector<int>& nums) {
    if(nums.size() == 2) return (nums[0] - 1) * (nums[1] - 1);
    int max1, max2;
    max1 = min(nums[0], nums[1]);
    max2 = max(nums[0], nums[1]);
    for(int i = 2; i < nums.size(); i++) {
        if(nums[i] > max1) {
            max1 = min(nums[i], max2);
            max2 = max(nums[i], max2);
        }
    }
    return (max1 - 1) * (max2 - 1);
}

int maxProduct2(vector<int>& nums) {
    int len = nums.size();
    int max1 = 0, max2 = 0;
    for(int num : nums) {
        if(num > max1) {
            max1 = num;
            max2 = max1;
        } else if(num > max2) {
            max2 = num;
        }
    }
    return (max1 - 1) * (max2 - 1);
}