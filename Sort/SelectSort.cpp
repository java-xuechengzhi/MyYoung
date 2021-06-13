#include "bits/stdc++.h"
using namespace std;

void SelectSort(int *num, int len) {
    for(int i = 0; i < len - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < len; j++) {
            if(num[j] < num[minIndex]) {
                minIndex = j;
            }
        }
        if(minIndex != i) {
            swap(num[minIndex], num[i]);
        }
    }
}


int main() {
    int a[10] = {4, 3, 5, 1, 2, 6, 9, 10, 7, 8};
    SelectSort(a, 10);
    for (int i : a) {
        printf("%d ", i);
    }
    return 0;
}