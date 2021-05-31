//
// Created by Xue on 2021/5/31.
//

#include<bits/stdc++.h>
using namespace std;

void print(int a[]) {
    for(int i = 0; i <= 10; i++) {
        printf("-->%d ", a[i]);
    }
    printf("\n");
}

void ShellSort(int a[], int len) {
    int i, j, dk;
    for(dk = len / 2; dk >= 1; dk /= 2) {
        for(i = dk + 1; i <= len; i++) {
            if(a[i] < a[i - dk]) {
                int temp = a[i];
                for(j = i - dk; j > 0 && temp < a[j]; j -= dk) {
                    a[j + dk] = a[j];
                }
                a[j + dk] = temp;
            }
        }
        print(a);
    }
}

int main() {
    int a[10] = {-1, 2, -10, 100, -3, 4, 7, 9, -8, 10};
    for (int x:a) {
        printf("%d ", x);
    }
    printf("\n");
    ShellSort(a, 9);
    for (int x:a) {
        printf("%d ", x);

    }
    return 0;
}