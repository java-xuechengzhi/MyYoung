//
// Created by Xue on 2021/6/28.
//
#include "bits/stdc++.h"
using namespace std;

bool valid(const string& str) {
    int balance = 0;
    for(char c : str) {
        if(c == '(') {
            ++balance;
        } else {
            --balance;
        }
        if(balance < 0) {
            return false;
        }
    }
    return balance == 0;
}

void generate_all(string& current, int n, vector<string>& result) {
    if(n == current.size()) {
        if(valid(current)) {
            result.push_back(current);
        }
        return;
    }
    current += "(";
    generate_all(current, n, result);
    current.pop_back();
    current += ")";
    generate_all(current, n, result);
    current.pop_back();
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    string current;
    generate_all(current, n * 2, result);
    return result;
}

void backtrack(vector<string>& ans, string& cur, int open, int close, int n) {
    if (cur.size() == n * 2) {
        ans.push_back(cur);
        return;
    }
    if (open < n) {
        cur.push_back('(');
        backtrack(ans, cur, open + 1, close, n);
        cur.pop_back();
    }
    if (close < open) {
        cur.push_back(')');
        backtrack(ans, cur, open, close + 1, n);
        cur.pop_back();
    }
}

vector<string> generateParenthesis2(int n) {
    vector<string> result;
    string current;
    backtrack(result, current, 0, 0, n);
    return result;
}