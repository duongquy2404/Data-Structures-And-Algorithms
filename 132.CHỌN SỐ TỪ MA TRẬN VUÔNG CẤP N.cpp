#include <iostream>
#include <vector>

using namespace std;

void permulation(int brr[], int n, bool& check) {
	int i = n - 1;
	while (i > 0 && brr[i] > brr[i + 1]) { i--; }
	if (i > 0) {
		int j = n;
		while (brr[j] < brr[i]) { j--; }
		swap(brr[i], brr[j]);
		int d = i + 1, c = n;
		while (d < c) {
			swap(brr[d], brr[c]);
			d++; c--;
		}
	}
	else { check = false; }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, k; cin >> n >> k;
	bool check = true;
	long long arr[101][101];
	int brr[101];
	vector<int> vtr;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 1; i <= n; i++) { brr[i] = i; }
	while (check) {
		long long sum = 0;
		for (int i = 1; i <= n; i++) { sum += arr[i][brr[i]]; }
		if (sum == k) {
			for (int j = 1; j <= n; j++) { vtr.push_back(brr[j]); }
		}
		permulation(brr, n, check);
	}
	cout << vtr.size() / n;
	for (int i = 0; i < vtr.size(); i++) {
		if (i % n == 0) { cout << endl; }
		cout << vtr[i] << " ";
	}
	return 0;
}