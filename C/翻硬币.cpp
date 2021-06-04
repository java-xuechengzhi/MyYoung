#include<iostream>
#include<string>
#include<iostream>
using namespace std;
int main() {
    string s1;
    string s2;
    getline(cin, s1);
    getline(cin, s2);
    int n = s1.length();
    int ans = 0;
    int start = -1;
    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i]) { //发现不同
            if (start == -1) { //判断是不是“新的起点”，因为有多段
                start = i;
            }
            else
            {
                ans += (i - start);
                start = -1; // 还原，为了发泄下一个”起点“做准备
            }
        }
    }
    cout << ans;
    return 0;
}