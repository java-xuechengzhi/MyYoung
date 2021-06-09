//
// Created by Xue on 2021/6/7.
//
#include "bits/stdc++.h"
using namespace std;

char *replace(char* s) {
    int len = strlen(s);
    char *res = (char*)malloc(sizeof(char) * len * 3 + 1);
    char *slow = s;
    char *fast = res;
    while(*slow != '\0') {
        if(*slow != ' ') {
            *fast = *slow;
            slow++;
            fast++;
        } else {
            slow++;
            *fast = '%'; fast++;
            *fast = '2'; fast++;
            *fast = '0'; fast++;
        }
    }
    *fast = '\0';
    return res;
}