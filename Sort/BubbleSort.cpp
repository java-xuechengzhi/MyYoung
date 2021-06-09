#include "bits/stdc++.h"
using namespace std;

void BubbleSort(int *num, int len) {
    for(int i = 0; i < len - 1; i++) {
        for(int j = 0; j < len - 1 - i; j++) {
            if(num[j + 1] < num[j]) {
                swap(num[j], num[j + 1]);
            }
        }
    }
}

void BubbleSort2(int *num, int len) {
    int cmp = 0, swp = 0;
    bool sorted = false;
    while(!sorted) {
        sorted = true;
        for(int i = 1; i < len; i++) {
            if(num[i - 1] > num[i]) {
                swap(num[i - 1], num[i]);
                sorted = false;
                swp++;
            }
            cmp++;
        }
    }
}



int main() {
    int a[10] = {4, 3, 5, 1, 2, 6, 9, 10, 7, 8};
    BubbleSort(a, 10);
    for (int i : a) {
        printf("%d ", i);
    }
    return 0;
}