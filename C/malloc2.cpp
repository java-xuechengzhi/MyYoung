//
// Created by Xue on 2021/5/31.
//

#include<stdio.h>
#include "stdlib.h"

int main(void) {
    int count, *array;
    if ((array=(int *) malloc(10 * sizeof(int))) == NULL) {
        exit(1);
    }

    for(count = 0; count < 10; count++) {
        array[count] = count;
    }
    for(count = 0; count < 10; count++) {
        printf("%2d", array[count]);
    }
    return 0;
}