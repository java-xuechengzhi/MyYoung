//
// Created by Xue on 2021/6/1.
//

#include "bits/stdc++.h"
using namespace std;

vector<int> getIntersection(unordered_set<int>& set1, unordered_set<int>& set2);

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> set1, set2;
    for(auto& num : nums1) {
        set1.insert(num);
    }
    for(auto& num : nums2) {
        set2.insert(num);
    }
    return getIntersection(set1, set2);
}

vector<int> getIntersection(unordered_set<int>& set1, unordered_set<int>& set2) {
    if(set1.size() > set2.size()) {
        return getIntersection(set2, set1);
    }
    vector<int> intersection;
    for(auto& num : set1) {
        if(set2.count(num)) {
            intersection.push_back(num);
        }
    }
    return intersection;
}

int cmp(void* a, void* b) {
    return *(int*)a - *(int*)b;
}

int* intersection2(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    qsort(nums1, nums1Size, sizeof(int), reinterpret_cast<int (*)(const void *, const void *)>(cmp));
    qsort(nums2, nums2Size, sizeof(int), reinterpret_cast<int (*)(const void *, const void *)>(cmp));
    *returnSize = 0;
    int index1 = 0, index2 = 0;
    int* intersection = (int*)malloc(sizeof(int) * (nums1Size + nums2Size));
    while (index1 < nums1Size && index2 < nums2Size) {
        int num1 = nums1[index1], num2 = nums2[index2];
        if (num1 == num2) {
            if (!(*returnSize) || num1 != intersection[(*returnSize) - 1]) {
                intersection[(*returnSize)++] = num1;
            }
            index1++;
            index2++;
        } else if (num1 < num2) {
            index1++;
        } else {
            index2++;
        }
    }
    return intersection;
}

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    int length1 = nums1.size(), length2 = nums2.size();
    vector<int> intersection;
    int index1 = 0, index2 = 0;
    while(index1 < length1 && index2 < length2) {
        if(nums1[index1] < nums2[index2]) {
            index1++;
        } else if(nums1[index1] > nums2[index2]) {
            index2++;
        } else {
            intersection.push_back(nums1[index1]);
            index1++;
            index2++;
        }
    }
    return intersection;
}














