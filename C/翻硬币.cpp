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
        if (s1[i] != s2[i]) { //���ֲ�ͬ
            if (start == -1) { //�ж��ǲ��ǡ��µ���㡱����Ϊ�ж��
                start = i;
            }
            else
            {
                ans += (i - start);
                start = -1; // ��ԭ��Ϊ�˷�й��һ������㡰��׼��
            }
        }
    }
    cout << ans;
    return 0;
}