//
// Created by Xue on 2021/6/2.
//

#include "bits/stdc++.h"
using namespace std;

void shuffle(int A[], int n) {
    while(0 < n) {
        swap(A[rand() % n], A[--n]);
    }
}