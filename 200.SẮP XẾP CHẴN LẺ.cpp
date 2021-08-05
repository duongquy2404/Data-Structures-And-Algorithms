#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) { return a > b; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int arr[100000], brr[100000];
	int p = 0, m = 0;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			cin >> arr[p];
			p++;
		}
		else {
			cin >> brr[m];
			m++;
		}
	}
	sort(arr, arr + p);
	sort(brr, brr + m, cmp);
	int a = 0, b = 0;
	while (a < p && b < m) {
		cout << arr[a] << " " << brr[b] << " ";
		a++; b++;
	}
	while (a < p) { cout << arr[a] << " "; a++; }
	while (b < m) { cout << brr[b] << " "; b++; }
	return 0;
}