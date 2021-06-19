//
// Created by Xue on 2021/6/19.
//

#include "bits/stdc++.h"
using namespace std;

bool isNumber(string& token);

int evalPRN(vector<string>& tokens) {
    stack<int> s;
    int n = tokens.size();
    for(int i = 0; i < n; i++) {
        string& token = tokens[i];
        if(isNumber(token)) {
            s.push(atoi(token.c_str()));
        } else {
            int num2 = s.top();
            s.pop();
            int num1 = s.top();
            s.pop();
            switch (token[0]) {
                case '+':
                    s.push(num1 + num2);
                    break;
                case '-':
                    s.push(num1 - num2);
                    break;
                case '*':
                    s.push(num1 * num2);
                    break;
                case '/':
                    s.push(num1 / num2);
                    break;
            }
        }

    }
    return s.top();
}

bool isNumber(string& token) {
    return !(token == "+" || token == "-" || token == "*" || token == "/");
}


int main() {

    return 0;
}