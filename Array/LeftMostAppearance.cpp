//
// Created by Xue on 2021/6/29.
//
/*
 * 给定一个数组arr及它的大小n，同时给定num。请返回所求位置。若该元素在数组中未出现，请返回-1。
 * */
#include "bits/stdc++.h"
using namespace std;

int LeftMostAppearance(vector<int> arr, int n, int num) {
    int res = -1;
    int low, high, middle;
    low = 0;
    high = n - 1;
    while(low <= high) {
        middle = low + (high - low) / 2;
        if(arr[middle] == num) {
            res = middle;
            high = middle - 1;
        } else if(arr[middle] > num) {
            high = middle - 1;
        } else if(arr[middle] < num) {
            low = middle + 1;
        }
    }
    return res;
}