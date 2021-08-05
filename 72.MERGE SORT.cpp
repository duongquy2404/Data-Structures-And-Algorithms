#include <iostream>

using namespace std;

int arr[1000000];
int L[1000000];
int R[1000000];

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void merge(int arr[], int l, int m, int r) {
	int i = m - l + 1;
	int j = r - m;
	for (int k = 0; k < i; k++) { L[k] = arr[l + k]; }
	for (int h = 0; h < j; h++) { R[h] = arr[m + h + 1]; }
	int a = 0, b = 0, c = l;
	while (a < i && b < j) {
		if (L[a] < R[b]) {
			arr[c] = L[a]; a++;
		}
		else { arr[c] = R[b]; b++; }
		c++;
	}
	while (a < i) {
		arr[c] = L[a];
		c++; a++;
	}
	while (b < j) {
		arr[c] = R[b];
		c++; b++;
	}
}

void merge_sort(int arr[], int l, int r) {
	if (l < r) {
		int m = l + (r - l) / 2;
		merge_sort(arr, l, m);
		merge_sort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}

int main() {
	fastIO();
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) { cin >> arr[i]; }
		merge_sort(arr, 0, n - 1);
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
}