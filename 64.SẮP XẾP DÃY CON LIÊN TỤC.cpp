#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000000];
int brr[1000000];

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	fastIO();
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		int l, r;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			brr[i] = arr[i];
		}
		sort(brr, brr + n);
		for (int i = 0; i < n - 1; i++) {
			if (arr[i] != brr[i]) {
				l = i;
				break;
			}
		}
		for (int i = n - 1; i > 0; i--) {
			if (arr[i] != brr[i]) {
				r = i;
				break;
			}
		}
		cout << l + 1 << " " << r + 1 << endl;
	}
}