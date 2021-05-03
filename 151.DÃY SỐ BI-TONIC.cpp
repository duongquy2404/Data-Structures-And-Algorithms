#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		int arr[101]; int brr[101]; int crr[101];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			brr[i] = arr[i];
			crr[i] = arr[i];
		}
		for (int i = 0; i < n; i++) {
			int tmp1 = 0;
			for (int j = 0; j < i; j++) {
				if (tmp1 < brr[j] && arr[i] > arr[j]) {
					tmp1 = brr[j];
				}
			}
			brr[i] += tmp1;
		}
		for (int i = n - 1; i >= 0; i--) {
			int tmp2 = 0;
			int tmp3 = 0;
			for (int j = n - 1	; j > i; j--) {
				if (tmp2<crr[j] && arr[i]>arr[j]) {
					tmp2 = crr[j];
					tmp3 = max(tmp3, tmp2);
				}
			}
			crr[i] += tmp2;
			brr[i] += tmp3;
		}
		int biTonic = 0;
		for (int i = 0; i < n; i++) {
			if (biTonic < brr[i]) { biTonic = brr[i]; }
		}
		cout << biTonic << endl;
	}
	return 0;
}