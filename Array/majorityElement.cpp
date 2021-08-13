//
// Created by Xue on 2021/7/25.
//

#include "bits/stdc++.h"
using namespace std;

int majorityElement(vector<int>& nums) {
    unordered_map<int, int> counts;
    int majority = 0, cnt = 0;
    for(int num : nums) {
        ++counts[num];
        if(counts[num] > cnt) {
            majority = num;
            cnt = counts[num];
        }
    }
    return majority;
}

int majorityElements2(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    return nums[nums.size() / 2];
}

int majorityElements3(vector<int>& nums) {
    while(true) {
        int candiate = nums[rand() % nums.size()];
        int count = 0;
        for(int num : nums) {
            if(num == candiate) {
                ++count;
            }
        }
        if(count > nums.size() / 2) {
            return candiate;
        }
        return -1;
    }
}