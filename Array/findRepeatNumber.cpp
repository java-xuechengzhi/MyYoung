//
// Created by Xue on 2021/6/1.
//

#include<bits/stdc++.h>
using namespace std;

int findRepeatNumber(vector<int>& nums) {
    unordered_map<int,bool> map;
    for(int num : nums) {
        if(map[num]) return num;
        map[num] = true;
    }
    return 1;
}