//
// Created by Xue on 2021/6/29.
//
#include "bits/stdc++.h"
using namespace std;

int singleNumber(vector<int>& nums) {
    int ret = 0;
    for(auto e : nums) ret ^= e;
    return  ret;
}
