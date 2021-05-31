//
// Created by Xue on 2021/5/31.
//

#include "bits/stdc++.h"

void removeDuplicate1(char str[]) {
    int len = strlen(str);
    int p = 0;
    int i;
    int j;
    for(i = 0; i < len; i++) {
        if(str[i] != '\0') {
            str[p++] = str[i];
            for(j = i + 1; j < len; j++) {
                if(str[i] == str[j]) {
                    str[j] = '\0';
                }
            }
        }
    }
    str[p] = '\0';
}

void removeDuplicate2(char str[], char res[]) {
    int slen = strlen(str);
    int rlen = 0;
    int flag, i, j;
    for(i = 0; i < slen; i++) {
        flag = 0;
        for(j = 0; j < rlen; j++) {
            if(res[j] == str[i]) flag = 1;
        }
        if(flag == 0) {
            res[rlen++] = str[i];
        }
    }
    res[rlen] = '\0';
}

void removeDuplicate(char str[]) {
    int len = strlen(str);
    int ascii[128] = {0};
    int p = 0;
    int i;

    for (i=0; i<len; i++) {
        if (ascii[str[i]] == 0) {
            ascii[str[i]] = 1;
            str[p++] = str[i];
        }
    }
    str[p] = '\0';
}

void removeDuplicate4(char str[], int n) {
    int len = strlen(str);
    int ascii[128] = {0};
    int p = 0;
    int i;

    for (i=0; i<len; i++) {
        if (ascii[str[i]] != n) {
            ascii[str[i]]++;
            str[p++] = str[i];
        }
    }
    str[p] = '\0';
}