#include<stdio.h>
#include "cstdlib"

int main(void) {
    int *p = (int *)calloc(10, sizeof(int));
    int *q = (int *)malloc(sizeof(int));
    int i, j;

    printf("申请得的空间有: \n");
    for (i = 0; i < 10; i++) {
        printf("%d ", *p++);
    }
    printf("\n");

    printf("申请得到的空间有: \n");
    for(j = 0; j < 10; j++) {
        printf("%d", *q++);
    }
    return 0;
}
