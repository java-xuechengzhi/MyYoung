//
// Created by Xue on 2021/5/31.
//

#include "stdio.h"
#include "stdlib.h"

int main() {
    int i, j;
    int row = 4, col = 5;
    int (*arr)[col] = (int(*)[col])malloc(sizeof(int) * row * col);

    for (i = 0;i < row;i++)
    {
        for (j = 0;j < col;j++)
        {
            printf("%p  ",&arr[i][j]);
        }
        printf("\n");
    }
    free(arr);

    return 0;
}