//
// Created by Xue on 2021/6/12.
//

#include "bits/stdc++.h"
using namespace std;
#define MAXN 10000

int prime[MAXN];

bool is_pri[MAXN + 5];

int sieve(int n) {
    int p = 0;
    for(int i = 0; i <= n; i++) is_pri[i] = true;
    is_pri[0] = is_pri[1] = false;
    for(int i = 2; i <= n; i++) {
        if(is_pri[i]) {
            prime[++p] = i;
            for(int j = 2 * i; j <= n; j += i) {
                is_pri[j] = false;
            }
        }
    }
    return p;
}

int main() {
    cin.tie(0);
    int ans = sieve(100);
    cout << ans << endl;
    return 0;
}