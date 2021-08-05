#include <iostream>

using namespace std;

const int mod = 1e9 + 7;

long long arr[11][11];
long long brr[11][11];
long long crr[11][11];

void in(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			brr[i][j] = arr[i][j];
		}
	}
}

void matrixMultication(long long x[11][11], long long y[11][11], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int k = 0;
			long long sum = 0;
			while (k < n) {
				sum = (sum + (x[i][k] * y[k][j]) % mod) % mod;
				k++;
			}
			crr[i][j] = sum;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			x[i][j] = crr[i][j];
		}
	}
}

void divided(int n, int k) {
	if (k <= 1) { return; }
	divided(n, k / 2);
	matrixMultication(arr, arr, n);
	if (k & 1) { matrixMultication(arr, brr, n); }
}

void out(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n, k; cin >> n >> k;
		in(n);
		divided(n, k);
		out(n);
	}
	return 0;
}