//
// Created by Xue on 2021/6/29.
//

#include "bits/stdc++.h"
using namespace std;
const int MOD = 1e7;

int QuickPower(int k,int N) {
    long res = 1;
    long temp = k;
    for(; N > 0; N >> 1) {
        if(N & 1 == 1) {
            res *= temp;
        }
        temp = (temp * temp) % MOD;
        res %= MOD;
    }
    return res;
}