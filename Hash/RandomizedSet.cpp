//
// Created by Xue on 2021/6/4.
//
#include "bits/stdc++.h"
using namespace std;

class RandomizedSet {
private:
    unordered_map<int, int> hash;
    vector<int> dyArray;
public:
    RandomizedSet() {

    }

    bool insert(int val) {
        auto it = hash.find(val);
        if(it  != hash.end()) return false;
        dyArray.push_back(val);
        hash[val] = dyArray.size() - 1;
        return true;
    }

    bool remove(int val) {
        auto it = hash.find(val);
        if(it !== hash.end()) return false;

        int lastPos = dyArray.size() - 1;
        int valPos = hash[val];
        dyArray[valPos] = dyArray[lastPos];
        dyArray.pop_back();
        hash[dyArray[valPos]] = valPos;
        hash.erase(val);
        return true;
    }

    int getRandom() {
        int size = dyArray.size();
        int pos = rand() % size;
        return dyArray[pos];
    }


};