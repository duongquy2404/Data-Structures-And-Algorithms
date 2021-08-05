#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int result = 0;
	int arr[10000];
	for (int i = 0; i < n; i++) { cin >> arr[i]; }
	sort(arr, arr + n);
	result = max(arr[n - 1] * arr[n - 2], max(arr[0] * arr[1], arr[0] * arr[n - 1]));
	result = max(result, max(arr[0] * arr[1] * arr[n - 1], arr[n - 3] * arr[n - 2] * arr[n - 1]));
	cout << result;
	return 0;
}