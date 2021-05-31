//
// Created by Xue on 2021/5/31.
//

#include "stdio.h"

enum DAY {
    MON = 1, TUE, WED, THU, FRI, SAT, SUN
};

int main() {
    enum DAY day;
    day = WED;
    printf("%d", day);
    return 0;
}

