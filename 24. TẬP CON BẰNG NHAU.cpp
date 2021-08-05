#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		int arr[100]; int sum = 0;
		for (int i = 0; i < n; i++) { cin >> arr[i]; sum += arr[i]; }
		if (sum % 2 != 0) {
			cout << "NO" << endl;
		}
		else {
			sum /= 2;
			int sumAi;
			bool kt = false;
			for (int i = 0; i < n; i++) {
				sumAi = 0;
				for (int j = i; j < n; j++) {
					sumAi += arr[j];
					if (sumAi == sum) {
						kt = true;
						break;
					}
					if (sumAi > sum) { sumAi -= arr[j]; }
				}
				if (kt == true) { break; }
			}
			if (kt == true) {
				cout << "YES" << endl;
			}
			else { cout << "NO" << endl; }
		}
	}
}