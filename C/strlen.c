//
// Created by 86188 on 2021/5/27.
//
#include "stdio.h"
#include "stdlib.h"
#include "malloc.h"
#include "string.h"

char sArr[] = "ILOVEC";

int main() {
    printf("%d\t", strlen(sArr));
    printf("%d", sizeof(sArr));
    return 0;
}