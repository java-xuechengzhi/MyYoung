//
// Created by Xue on 2021/5/31.
//

#include <cstring>
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define random_set(a,b) ((rand()%(b-a))+a)

int main(void) {
    int array_stu[50];
    int array_out[100];

    memset(array_stu, 0, sizeof(array_stu));
    memset(array_out, 0, sizeof(array_out));

    for(int i = 0; i < 50; i++) {
        array_stu[i] = random_set(1, 99);
    }

    for(int i = 0; i < 50; i++) {
        for(int j = 1; j < 100; j++) {
            if(array_stu[i] == j) {
                array_out[j]++;
            }
        }
    }

    for(int i = 0; i < 100; i++) {
        while(array_out[i] > 0) {
            printf("%d ", i);
            array_out[i]--;
        }
    }
    return 0;
}