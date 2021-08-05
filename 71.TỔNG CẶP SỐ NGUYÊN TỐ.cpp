#include <iostream>
#include <cmath>

using namespace std;

int a[1000001];

void snt() {
	a[0] = a[1] = 0;
	for (int i = 2; i <= 1000000; i++) {
		a[i] = 1;
	}
	for (int i = 2; i <= sqrt(1000000); i++) {
		if (a[i] == 1) {
			for (int j = i * i; j <= 1000000; j += i) {
				a[j] = 0;
			}
		}
	}
}

int main() {
	int test;
	cin >> test;
	snt();
	while (test--) {
		int n;
		cin >> n;
		int kt = 0;
		for (int i = 2; i <= n; i++) {
			if (a[i] == 1 && a[n - i] == 1) {
				cout << i << " " << n - i << endl;
				kt = 1;
				break;
			}
		}
		if (kt == 0) { cout << "-1" << endl; }
	}
	return 0;
}