#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int arr[12];

void nextList(int arr[], int n, bool& kt) {
	if (arr[1] == 1) { kt = false; }
	for (int i = n; i > 0; i--) {
		if (arr[i] != 1 && arr[i] != 0) {
			if (i != 1) {
				arr[i]--;
				if (arr[i] != 1) {
					int p = 0;
					for (int j = 1; j <= i; j++) { p += arr[j]; }
					p = n - p;
					int k = i + 1;
					while (p > 0) {
						if (p > arr[i]) {
							arr[k] = arr[i];
							p -= arr[i];
						}
						else {
							arr[k] = p;
							p = 0;
						}
						k++;
						for (int h = k; h <= n; h++) { arr[h] = 0; }
					}
				}
				else {
					for (int j = i + 1; j <= n; j++) {
						if (arr[j] == 0) {
							arr[j] = 1;
							break;
						}
					}
				}
			}
			else {
				arr[i]--;
				int m = n - arr[i];
				int j = i + 1;
				while (m > 0) {
					if (m > arr[i]) {
						arr[j] = arr[i];
						m -= arr[i];
					}
					else {
						arr[j] = m;
						m = 0;
					}
					j++;
				}
				for (int k = j; k <= n; k++) { arr[k] = 0; }
			}
			break;
		}
	}
}

void out(int arr[], string &str, int n) {
	/*cout << "(";
	for (int i = 1; i <= n; i++) {
		if (arr[i] != 0) { cout << arr[i]; }
		if (arr[i + 1] != 0) { cout << " "; }
	}
	cout << ") ";*/
	str += "(";
	for (int i = 1; i <= n; i++) {
		if (arr[i] != 0) { str += to_string(arr[i]); }
		if (arr[i + 1] != 0) { str += " "; }
	}
	str += ") ";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		bool kt = true;
		int count = 0;
		string str = "";
		memset(arr, 0, sizeof(arr));
		arr[1] = n;
		while (kt) {
			out(arr, str, n);
			count++;
			nextList(arr, n, kt);
		}
		cout << count << endl <<  str << endl;
	}
	return 0;
}