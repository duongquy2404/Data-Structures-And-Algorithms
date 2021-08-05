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

int sumOfMainDiagonals(int n) {
	long long sum = 0;
	int i = 0; int j = 0;
	while (i < n) {
		sum = (sum + arr[i][j] % mod) % mod;
		i++; j++;
	}
	return sum;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n, k; cin >> n >> k;
		in(n);
		divided(n, k);
		cout << sumOfMainDiagonals(n) << endl;
	}
	return 0;
}