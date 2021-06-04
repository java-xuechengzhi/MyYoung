#include<iostream>
using namespace std;
#define maxN 1000
int r[maxN];

void CreateHeap(int n) {
	for (int i = n / 2; i > 0; i--)
		Sink(i, n);
}

void Sink(int k, int n) {
	while (2 * k <= n) {
		int j = 2 * k;
		if (j < n && r[j] < r[j + 1])
			j++;
		if (r[k] >= r[j])
			break;
		else
			swap(r[k], r[j]);
		k = j;
	}
}



void Swim(int k) {
	while (k > 1 && r[k] > r[k / 2])
	{
		swap(r[k], r[k / 2]);
		k = k / 2;
	}
}

void pop(int n) {
	cout << r[1] << endl;
	r[1] = r[n--];
	Sink(1, n);
}

void push(int n, int x) {
	r[++n] = x;
	Swim(n);
}

int main() {
	int n, select, x;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> r[i];
	}
	CreateHeap(n);
	return 0;
}