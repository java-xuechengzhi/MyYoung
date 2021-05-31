//
// Created by Xue on 2021/5/31.
//

#include "bits/stdc++.h"
using namespace std;

void swap(int *i, int *j) {
    int temp = *j;
    *j = *i;
    *i = temp;
}

void AdjustDown(int a[], int k, int len) {
    a[0] = a[k];
    for(int i = 2 * k; i <= len; i *= 2) {
        if(i < len && a[i + 1] > a[i]) {
            i++;
        }
        if(a[0] >= a[i]) {
            break;
        } else {
            a[k] = a[i];
            k = i;
        }
    }
    a[k] = a[0];
}


void BuildHeap(int a[], int len) {
    for(int i = len / 2; i > 0; i--) {
        AdjustDown(a, i, len);
    }
}

void HeapSort(int a[], int len) {
    BuildHeap(a, len);
    for(int i = len; i > 1; --i) {
        swap(&a[i], &a[1]);
        AdjustDown(a, 1, i - 1);
    }
}

int main() {
    int a[101] = {0, -4, 3, 5, 1, 2, 6, 9, 10, 7, -8};

    for (int i = 1; i <= 10; ++i) {
        printf("%d\t", a[i]);
    }
    printf("\n");
    HeapSort(a, 10);
    for (int i = 1; i <= 10; ++i) {
        printf("%d\t", a[i]);
    }
    return 0;
}