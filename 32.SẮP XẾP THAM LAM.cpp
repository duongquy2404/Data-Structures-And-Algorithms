#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		int arr[1000], brr[1000];
		bool kt = true;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			brr[i] = arr[i];
		}
		sort(brr, brr + n);
		for (int i = 0; i < n; i++) {
			if (arr[i] != brr[i] && arr[n - i - 1] != brr[i]) {
				kt = false;
				break;
			}
		}
		if (kt == true) {
			cout << "Yes" << endl;
		}
		else { cout << "No" << endl; }
	}
}