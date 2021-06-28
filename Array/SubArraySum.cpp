//
// Created by Xue on 2021/6/28.
//
#include "bits/stdc++.h"
using namespace std;

int subArraySum(vector<int>& nums, int k) {
    unordered_map<int, int> mp;
    mp[0] = 1;
    int count = 0, pre = 0;
    for(auto& x : nums) {
        pre += x;
        if(mp.find(pre - k) != mp.end()) {
            count += mp[pre - k];
        }
        mp[pre]++;
    }
    return count;
}

int subArraySum2(vector<int>& nums, int k) {
    int count = 0;
    for(int start = 0; start < nums.size(); ++start) {
        int sum = 0;
        for(int end = start; end >= 0; --end) {
            sum += nums[end];
            if(sum == k) {
                count++;
            }
        }
    }
    return count;
}

int main() {

    return 0;
}
