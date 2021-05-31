//
// Created by Xue on 2021/5/31.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int i;
    int* t;
    int* p = (int*)malloc(10 * sizeof(int));
    t = p;

    for(int i = 0; i < 10; i++) {
        p[i] = i;
    }
    p = (int*)realloc(p, 20 * sizeof(int));

    for(i = 10; i < 20; i++) {
        p[i] = i;
    }

    for(i = 0; i < 20; i++) {
        printf("%3d", p[i]);
    }
    printf("\n");
    printf("p = %p \nt = %p\n", p, t);
    free(p);
    p = NULL;
    /** 如果申请空间的数值较小，原来申请的动态内存后面还有空余内存，系统将直接在原内存空间后面扩容
并返回原动态空间基地址；如果申请空间的数值较大，原来申请的空间后面没有足够大的空间扩容，
系统将重新申请一块新的内存，并把原来空间的内容拷贝过去，原来空间OS自动free;如果申请空间的数值非常大，
系统内存申请失败，返回NULL,原来的内存不会释放。注意：如果扩容后的内存空间较原空间小，将会出现数据丢失，
如果直接realloc(p, 0);相当于free(p).
     **/
    return 0;
}