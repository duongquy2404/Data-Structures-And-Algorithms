#include <iostream>
#include <cstring>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int n;
	int arr[1001], brr[1001];
	memset(brr, 0, sizeof(brr));
	brr[0] = 1;
	int maxUp = 1;
	cin >> n;
	for (int i = 0; i < n; i++) { cin >> arr[i]; }
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[j] < arr[i]) {
				brr[i] = max(brr[i], brr[j] + 1);
			}
		}
		maxUp = max(brr[i], maxUp);
	}
	cout << maxUp;
	return 0;
}