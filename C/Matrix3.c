//
// Created by Xue on 2021/5/31.
//

#include "stdlib.h"
#include "stdio.h"


typedef struct {
    int a[5];
}item;


int main() {
    int i, j;
    int row = 4, col = 5;
    int *arr = (int*)malloc(sizeof(int) * row * col);

    item *arr2 = (item*)malloc(sizeof(item) * 4);

    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%p  ", &arr[i * col + j]);
        }
        printf("\n");
    }
    free(arr);
    return 0;
}