#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

struct doubleValue{
	int x, y;
};

bool cmp(doubleValue a, doubleValue b) {
	return a.x < b.x;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		doubleValue arr[102];
		int	brr[102];
		for (int i = 0; i < n; i++) {
			cin >> arr[i].x >> arr[i].y;
			brr[i] = 1;
		}
		sort(arr, arr + n, cmp);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++) {
				if (arr[i].x > arr[j].y) { brr[i] = max(brr[i], brr[j] + 1); }
			}
		}
		cout << brr[n - 1] << endl;
	}
	return 0;
}