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
    int b[10] = {3, 4, 5, 1, 6, 11, 21, 23, 7, 9};
    SelectSort(a, 10);
    for (int i : a) {
        printf("%d ", i);
    }
    printf("\n");
    SelectSort(b, 10);
    for(int j : b) {
        printf("%d ", j);
    }
    return 0;
}
