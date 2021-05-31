//
// Created by Xue on 2021/5/31.
//

#include "stdlib.h"
#include "stdio.h"

int main() {
    int i, j;
    int row = 4, col = 5;
    int **arr = (int**)malloc(sizeof(int*) * row);
    for(i = 0; i < row; i++) {
        arr[i] = (int*)malloc(sizeof(int) * col);
    }

    for (i = 0;i < row;i++)
    {
        for (j = 0;j < col;j++)
        {
            printf("%p  ",&arr[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < row; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;

}