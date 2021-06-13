//
// Created by Xue on 2021/6/13.
//

#include "bits/stdc++.h"
using namespace std;

typedef struct {
    int weight;
    int parent;
    int left;
    int right;
    bool flag;
}HuffmanTree;

void CreateHuffmanTree(vector<HuffmanTree> &h, const vector<int>w) {
    int n = w.size();
    int sumNode = 2 * n - 1;
    for(int i = 0; i < sumNode; i++) {
        if(i < n) {
            h[i].weight = w[i];
        } else {
            h[i].weight = 0;
        }
        h[i].parent = -1;
        h[i].left = -1;
        h[i].right = -1;
        h[i].flag = false;
    }
    sumNode = n - 1;
    int mini1, mini2; // mini1:min, mini2: second min
    int x1, x2;
    for(int i = 0; i < sumNode; i++) {
        mini1 = mini2 = INT_MAX;
        x1 = x2 = 0;
        for(int j = 0; j < n + i; j++) {
            if(h[j].weight < mini1 && !h[j].flag) {
                mini2 = mini1;
                x2 = x1;
                mini1 = h[j].weight;
                x1 = j;
            } else if(h[j].weight < mini2 && !h[j].flag) {
                mini2 = h[j].weight;
                x2 = j;
            }
        }
        h[n + i].weight = mini1 + mini2;
        h[n + i].left = x1;
        h[n + i].right = x2;
        h[x1].parent = n + i;
        h[x2].parent =  n + i;
        h[x1].flag = true;
        h[x2].flag = true;
    }
}

void HuffmanEncoding(vector<HuffmanTree> &h, int n, vector<deque<bool>> &c) {
    int _child, _parent;
    for (int i = 0; i < n; i++) {
        _child = i;
        _parent = h[_child].parent;
        while(_parent != -1) {
            if(h[_parent].left == _child) {
                c[i].push_front(0);
            } else {
                c[i].push_front(1);
            }
            _child = _parent;
            _parent = h[_parent].parent;
        }
    }
}

vector<int> weight = {7, 5, 2, 4};
vector<HuffmanTree> huff(2 * weight.size() - 1);
vector<deque<bool>> encode(weight.size());

int main ()
{
    CreateHuffmanTree(huff, weight);
    cout << "\n---叶子向量:vector<int>weight={7, 5, 2, 4};\n";
    cout << "*******哈夫曼树********" << endl;
    cout << "节点 左孩子 右孩子" << endl;
    for (vector<HuffmanTree>::iterator it = huff.begin(); it != huff.end(); it++) {
        cout << it->weight;
        if (it->left >= 0) {
            cout << " " << huff[it->left].weight;
        } else {
            cout << " *";
        }
        if (it->right >= 0) {
            cout << " " << huff[it->right].weight;
        } else {
            cout << " *";
        }
        cout << "\n";
    }

    //哈夫曼编码
    int n = weight.size();
    HuffmanEncoding(huff, n, encode);
    cout << "\n******哈夫曼编码:*******" << endl;
    for (int i = 0; i < n; i++) {
        cout << huff[i].weight << ":";
        copy(encode[i].begin(), encode[i].end(), ostream_iterator<bool>(cout));
        cout << "\n";
    }

    return 0;
}

















