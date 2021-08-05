#include <iostream>

using namespace std;

int arr[21];
bool brr[21];
int n, k, sum;
bool check;

void chiaTap(int s, int count) {
	if (check) { return; }
	if (count == k) { check = true; return; }
	for (int i = 0; i < n; i++) {
		if (brr[i] == false) {
			brr[i] = true;
			if (s == sum) {
				chiaTap(0, count + 1);
				return;
			}
			else if (s > sum) {
				return;
			}
			else { chiaTap(s + arr[i], count); }
		}
		brr[i] = false;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		cin >> n >> k;
		sum = 0;
		check = false;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			brr[i] = false;
			sum += arr[i];
		}
		if (sum % k == 0) {
			sum /= k;
			chiaTap(0, 0);
			if (check) {
				cout << 1 << endl;
			}
			else { cout << 0 << endl; }
		}
		else {
			cout << 0 << endl;
		}
	}
	return 0;
}