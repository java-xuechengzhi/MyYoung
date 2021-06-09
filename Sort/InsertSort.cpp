#include "bits/stdc++.h"
using namespace std;

void insertSort(int *a, int len) {
    for(int i = 1; i <= len - 1; i++) {
        int temp = a[i];

        while(i > 0  && temp < a[i - 1]) {
            a[i] = a[i - 1];
            i--;
        }
        a[i] = temp;
    }
}



int main() {
    int a[10] = {4, 3, 5, 1, 2, 6, 9, 10, 7, 8};
    insertSort(a, 10);
    for(int i : a) {
        printf("%d ", i);
    }
    return 0;
}