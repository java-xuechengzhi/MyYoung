//
// Created by Xue on 2021/6/19.
//

#include "bits/stdc++.h"
using namespace std;

char* removeDuplicates(char* s) {
    int n = strlen(s);
    char* stk = (char*)malloc(sizeof(char) * (n + 1));
    int retSize = 0;
    for(int i = 0; i < n; i++) {
        if(retSize > 0 && stk[retSize - 1] == s[i]) {
            retSize--;
        } else {
            stk[retSize++] = s[i];
        }
    }
    stk[retSize] = '\0';
    return stk;
}


int main() {
    return 0;
}