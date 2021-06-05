//
// Created by Xue on 2021/5/31.
//

#include<bits/stdc++.h>
using namespace std;
#define Maxsize 10000

int A[Maxsize];
int Maxbit(int A[], int n) {
    int maxvalue = A[0], digits = 0;
    for(int i = 1; i < n; i++) {
        if(A[i] > maxvalue) {
            maxvalue = A[i];
        }
    }
    while(maxvalue != 0) {
        digits++;
        maxvalue /= 10;
    }
    return digits;
}

int Bitnumber(int x, int bit) {
    int temp = 1;
    for(int i = 1; i < bit; i++) {
        temp *= 10;
    }
    return (x / temp) % 10;
}


void RadixSort(int A[], int n) {
    int i, j, k, bit, MaxBit;
    MaxBit = Maxbit(A, n);
    cout << MaxBit << endl;
    int **B = new int *[10];
    for(bit = 1; bit <= MaxBit; bit++) {
        for(j = 0; j < n; j++) {
            int num = Bitnumber(A[i], bit);
            int index = ++B[num][0];
            B[num][index] = [j];
        }A
        for(i = 0, j = 0; i < 10; i++) {
            for(k = 1; k <= B[i][0]; k++)
                A[j++] = B[i][k];
            B[i][0] = 0;
        }
    }

    for(int i = 0; i < 10; i++) {
        delete []B[i];
    }
    delete B;
}

int main()
{
    int n;
    cout<<"请输入数列中的元素个数n为："<<endl;
    cin>>n;
    cout<<"请依次输入数列中的元素："<<endl;
    for(int i=0;i<n;i++)
        cin>>A[i];
    RadixSort(A,n);
    cout<<"基数排序结果："<<endl;
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
    cout<<endl;
    return 0;
}
