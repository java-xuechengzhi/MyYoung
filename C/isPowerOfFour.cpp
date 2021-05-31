//
// Created by 86188 on 2021/5/31.
//
#include<bits/stdc++.h>
using namespace std;

bool isPowerOfFour(int num) {
    return num > 0 && (num == 1 || (num % 4 == 0 && isPowerOfFour(num / 4)));
}

int main() {
    return 0;
}