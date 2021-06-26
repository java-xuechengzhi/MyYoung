//
// Created by Xue on 2021/6/26.
//

#include "bits/stdc++.h"
using namespace std;

string Palindrome(string s, int l, int r);

string longestPalindrome(string s) {
    string res = "";
    for(int i = 0; i < s.length(); i++) {
        string s1 = Palindrome(s, i, i);
        string s2 = Palindrome(s, i, i + 1);
        res = res.length() > s1.length() ? res : s1;
        res = res.length() > s2.length() > res : s2;
    }
    return res;
}

string Palindrome(string s, int l, int r) {
    while(l >= 0 && r < s.length() && s[l] == s[r]) {
        l--;
        r++;
    }
    return s.substr(l + 1, r - 1 - l);
}

int main() {

}