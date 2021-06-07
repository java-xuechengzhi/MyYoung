//
// Created by Xue on 2021/6/1.
//

#include "bits/stdc++.h"
using namespace std;

int* sortArrayByParityII(int* A, int ASize, int* returnSize) {
    int* ans = (int*)malloc(sizeof(int) * ASize);
    int add = 0;
    for(int i = 0; i < ASize; i++) {
        if(A[i] % 2 == 0) {
            ans[add] = A[i];
            add += 2;
        }
    }
    add = 1;
    for(int i = 0; i < ASize; i++) {
        if(A[i] % 2 == 1) {
            ans[add] = A[i];
            add += 2;
        }
    }
    *returnSize = ASize;
    return ans;
}

void swap(int* a, int* b) {
    int t = *a;
    *a = *b, *b = t;
}

int* sortArrayByParityII2(int* A, int ASize, int* returnSize) {
    int j = 1;
    for(int i = 0; i < ASize; i += 2) {
        if(A[i] % 2 == 1) {
            while(A[j] % 2 == 0) {
                j += 2;
            }
            swap(A + i, A + j);
        }
    }
    *returnSize = ASize;
    return A;
}















