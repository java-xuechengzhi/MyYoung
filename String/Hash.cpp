//
// Created by Xue on 2021/5/31.
//

#include<bits/stdc++.h>
using namespace std;

#define m 15
#define NULLKEY 0

int HT[m], HC[m];

int H(int key) {
    return key % 13;
}

int Linedetect(int HT[], int H0, int key, int &cnt) {
    int Hi;
    for(int i = 1; i < m; i++) {
        cnt++;
        Hi = (H0 + i) % m;
        if(HT[Hi] == NULLKEY) {
            return Hi;
        } else if(HT[Hi] == key) {
            return Hi;
        }
    }
    return -1;
}

int Seconddetect(int HT[], int H0, int key, int &cnt) {
    int Hi;
    for(int i = 1; i <= m / 2; i++) {
        int i1 = i * i;
        int i2 = -i1;
        cnt++;
        Hi = (H0 + i1) % m;
        if(HT[Hi]== NULLKEY)
            return Hi;
        else if(HT[Hi] == key)
            return Hi;
        cnt++;
        Hi = (H0 + i2) % m;
        if(Hi < 0)
            Hi += m;
        if(HT[Hi] == NULLKEY)
            return Hi;
        else if(HT[Hi] == key)
            return Hi;
    }
    return -1;
}

int SearchHash(int HT[], int key) {
    int H0 = H(key);
    int Hi, cnt = 1;
    if(HT[H0] == NULLKEY) {
        return -1;
    } else if(HT[H0] == key) {
        cout << cnt << endl;
        return H0;
    } else {
        Hi = Linedetect(HT, H0, key, cnt);
        if(HT[Hi] == key) {
            cout << cnt << endl;
            return Hi;
        } else
            return -1;
    }
}

bool InsertHash(int HT[], int key) {
    int H0 = H(key);
    int Hi = -1, cnt = 1;
    if(HT[H0] == NULLKEY) {
        HC[H0] = 1;
        HT[H0] = key;
        return 1;
    } else {
        Hi = Linedetect(HT, H0, key, cnt);
        if(Hi != -1 && HT[Hi] == NULLKEY) {
            HC[Hi] = cnt;
            HT[Hi] = key;
            return 1;
        }
    }
    return 0;
}

void print(int HT[]) {
    for(int i = 0; i < m; i++) {
        cout << HT[i] << " ";
    }
    cout << endl;
}



int main()
{
    int x;
    memset(HT,0,sizeof(HT));
    memset(HC,0,sizeof(HC));
    print(HT);
    cout<<"输入12个关键字，存入哈希表中："<<endl;
    for(int i=0;i<12;i++)
    {
        cin>>x;//14 36 42 38 40 15 19 12 51 65 34 25
        if(!InsertHash(HT,x))
        {
            cout<<"创建哈希表失败！"<<endl;
            return 0;
        }
    }
    cout<<"输出哈希表："<<endl;
    print(HT);
    print(HC);
    cout<<"输入要查找的关键字"<<endl;
    cin>>x;
    int result=SearchHash(HT,x);
    if(result!=-1)
        cout<<"在第"<<result+1<<"位置找到"<<endl;
    else
        cout<<"未找到"<<endl;
    return 0;
}

