#include <iostream>
#include <cmath>

using namespace std;

const int mod = 1e9 + 7;

long long fb[2][2], arr[2][2];

void matrixProduct(long long fb[2][2], long long arr[2][2]) {
	int a = ((fb[0][0] * arr[0][0]) % mod + (fb[0][1] * arr[1][0]) % mod) % mod;
	int b = ((fb[0][0] * arr[0][1]) % mod + (fb[0][1] * arr[1][1]) % mod) % mod;
	int c = ((fb[1][0] * arr[0][0]) % mod + (fb[1][1] * arr[1][0]) % mod) % mod;
	int d = ((fb[1][0] * arr[0][1]) % mod + (fb[1][1] * arr[1][1]) % mod) % mod;
	fb[0][0] = a; fb[0][1] = b; fb[1][0] = c; fb[1][1] = d;
}

void powFibo(long long fb[2][2], int n) {
	if (n <= 1) { return; }
	powFibo(fb, n / 2);
	matrixProduct(fb, fb);
	if (n % 2 == 1) { matrixProduct(fb, arr); }
}

int loadingFibo(int n) {
	fb[0][0] = 1; fb[0][1] = 1; fb[1][0] = 1; fb[1][1] = 0;
	arr[0][0] = 1; arr[0][1] = 1; arr[1][0] = 1; arr[1][1] = 0;
	if (n == 0) {
		return 0;
	}
	else {
		powFibo(fb, n - 1);
		return fb[0][0];
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		cout << loadingFibo(n) << endl;
	}
	return 0;
}