#include <iostream>

using namespace std;

int arr[100000];
int brr[100000];

void in(int n) {
	for (int i = 0; i < n; i++) { cin >> arr[i]; brr[i] = arr[i]; }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		int sumMax = 0;
		int tmp = 0;
		in(n);
		for (int i = 0; i < n; i++) {
			if (i >= 2) {
				tmp = max(tmp, brr[i - 2]);
			}
			brr[i] += tmp;
			if (sumMax < brr[i]) { sumMax = brr[i]; }
		}
		cout << sumMax << endl;
	}
	return 0;
}

