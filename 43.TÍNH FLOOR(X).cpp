#include <iostream>

using namespace std;

long long arr[100000];

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		long long x;
		cin >> n >> x;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int minX = -1;
		for (int i = 0; i < n; i++) {
			if (arr[i] <= x) {
				minX = i + 1;
			}
			else {
				break;
			}
		}
		cout << minX << endl;
	}
}