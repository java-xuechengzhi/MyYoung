//
// Created by 86188 on 2021/5/27.
//

#include<stdio.h>
#include<stdlib.h>

int main() {
    int i, n;
    char* buffer;
    printf("输入字符串的长度:");
    scanf("%d",&i);
    buffer = (char*) malloc(i + 1);
    if(buffer == NULL) exit(1);
    for(n = 0; n < i; n++) {
        buffer[n] = rand() % 26 + 'a';
    }
    buffer[i] = '\0';
    printf("\n");
    printf("字符串为:%s", buffer);
    free(buffer);
    system("pause");
    return 0;
}