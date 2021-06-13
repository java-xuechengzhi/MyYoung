#include "bits/stdc++.h"
using namespace std;

int findPosition(int *a, int left, int right);

void quickSort(int *a, int left, int right) {
    if(left >= right) {
        return;
    }
    int pos = findPosition(a, left, right);
    quickSort(a, left, pos - 1);
    quickSort(a, pos + 1, right);
}

int findPosition(int *a, int left, int right) {
    int temp = a[left];

    while(left < right) {
        while(left < right && a[right] >= temp) {
            right--;
        }
        a[left] = a[right];

        while(left < right && a[left] <= temp) {
            left++;
        }
        a[right] = a[left];
    }
    a[left] = temp;

    return left;
}



int main() {
    int a[10] = {4, 3, 5, 1, 2, 6, 9, 10, 7, 8};

    quickSort(a, 0, 9);
    for (int i : a) {
        printf("%d ", i);
    }
    return 0;
}