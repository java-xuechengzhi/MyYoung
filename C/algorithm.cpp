#include<iostream>
using namespace std;
int c[26];
int main()
{
    string a;
    cin >> a; int max = 0;
    int i; int b = 97; char x;
    for (i = 0; i < a.length(); ++i)
    {
        ++c[a[i] - 97];
    }
    for (i = 0; i < 26; ++i)
    {
        if (c[i] > max) {
            max = c[i];
            x = i + 97;
        }
    }
    cout << x << endl << max << endl;
    return 0;
}