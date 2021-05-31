#include <cstdio>

void merge(int a[], int L, int M, int R);

void mergeSort(int a[], int L, int R) {
    if (L == R) {
        return;
    } else {
        int M = (L + R) / 2;
        mergeSort(a, L, M);
        mergeSort(a, M + 1, R);
        merge(a, L, M + 1, R);


    }


}

void merge(int a[], int L, int M, int R) {
    int leftArray[M - L];
    int rightArray[R - M + 1];

    for (int i = 0; i < M - L; ++i) {
        leftArray[i] = a[L+i];
    }
    for (int j = 0; j < (R - M + 1); ++j) {
        rightArray[j] = a[M + j];
    }
    int i = 0;
    int j = 0;
    int k = L;
    while (i < (M - L) && j < (R - M + 1)) {
        if (leftArray[i] < rightArray[j]) {
            a[k] = leftArray[i];
            i++;
            k++;
        }
        if (leftArray[i] >= rightArray[j]) {
            a[k] = rightArray[j];
            j++;
            k++;
        }
    }

    while (i < (M - L)) {
        a[k] = leftArray[i];
        i++;
        k++;
    }
    while (j < (R - M + 1)) {
        a[k] = rightArray[j];
        k++;
        j++;
    }


}

int main() {
    int a[11] = {1,4, 3, 5, 1, 2, 6, 9, 10, 7, 8};
    mergeSort(a, 0, 10);
    for (int i = 0; i < 11; ++i) {
        printf("%d ", a[i]);
    }
    return 0;
}