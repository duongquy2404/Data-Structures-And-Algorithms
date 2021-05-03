#include <iostream>

using namespace std;
int n, arr[100], xuoi[100], nguoc[100], check[100];
int sum;
int brr[111][111];

void in() {
	for (int i = 1; i <= n; i++) {
		check[i] = 1;
	}
	for (int i = 1; i <= 2 * n - 1; i++) {
		xuoi[i] = 1;
		nguoc[i] = 1;
	}
}

void out() {
	int tmp = 0;
	for (int i = 1; i <= n; i++) {
		tmp += brr[i][arr[i]];
	}
	if (sum < tmp) { sum = tmp; }
}

void Try(int i) {
	for (int j = 1; j <= n; j++) {
		if (check[j] && xuoi[i - j + n] && nguoc[i + j - 1]) {
			arr[i] = j;
			check[j] = 0;
			xuoi[i - j + n] = 0;
			nguoc[i + j - 1] = 0;
			if (i == n) {
				out();
			}
			else { Try(i + 1); }
			check[j] = 1;
			xuoi[i - j + n] = 1;
			nguoc[i + j - 1] = 1;
		}
	}
}

int main() {
	n = 8;
	in();
	int test; cin >> test;
	while (test--) {
		for (int i = 1; i < 9; i++) {
			for (int j = 1; j < 9; j++) {
				cin >> brr[i][j];
			}
		}
		sum = 0;
		Try(1);
		cout << sum << endl;
	}
	system("pause");
	return 0;
}