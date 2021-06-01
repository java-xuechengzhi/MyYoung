//
// Created by Xue on 2021/6/1.
//

#include "bits/stdc++.h"
using namespace std;

string removeOuterParentheses2(string str) {
    int count = 0;
    string ans = "";
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == '(' && count++ > 0) ans += '(';
        if(str[i] == ')' && count-- > 1) ans += ')';
    }
    return ans;
}

string removeOuterParentheses(string str) {
    int n = str.size();
    stack<int> s;
    string res = "";
    for(int i = 0; i < n; i++) {
        if(str[i] == '(') {
            s.push(i);
        } else {
            int start = s.top();
            s.pop();
            if(s.empty()) {
                res += str.substr(start + 1, i - start - 1);
            }
        }
    }
    return res;
}

//stack:()
//start:2