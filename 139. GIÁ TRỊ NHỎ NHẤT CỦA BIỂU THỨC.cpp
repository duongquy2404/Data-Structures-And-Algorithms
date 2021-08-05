#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000000];
int brr[1000000];

bool sortUp(int a, int b) { return a < b; }
bool sortDown(int a, int b) { return a > b; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		long long sum = 0;
		for (int i = 0; i < n; i++) { cin >> arr[i]; }
		for (int i = 0; i < n; i++) { cin >> brr[i]; }
		sort(arr, arr + n, sortUp);
		sort(brr, brr + n, sortDown);
		for (int i = 0; i < n; i++) {
			sum += arr[i] * brr[i];
		}
		cout << sum << endl;
	}
}