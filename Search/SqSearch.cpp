//
// Created by Xue on 2021/5/31.
//

#include<iostream>
using namespace std;
#define Maxsize 100

int SqSearch(int r[], int n, int x) {
    for(int i = 0; i < n; i++)
        if(r[i] == x)
            return i;
    return -1;
}

int SqSearch2(int r2[], int n, int x) {
    int i;
    r2[0] = x;
    for(i = n; r2[i] != x; i--);
    return i;
}

int main()
{
    int i,n,x,r[Maxsize],r2[Maxsize+1];
    cout<<"请输入元素个数n为："<<endl;
    cin>>n;
    cout<<"请依次n个元素："<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>r[i];
        r2[i+1]=r[i];//r2[]数组0空间未用，做监视哨
    }
    cout<<endl;
    cout<<"请输入要查找的元素：";
    cin>>x;
    i=SqSearch2(r2,n,x);
    if(i==0)
        cout<<"该数列中没有要查找的元素"<<endl;
    else
        cout<<"要查找的元素在第"<<i<<"位"<<endl;
    return 0;
}