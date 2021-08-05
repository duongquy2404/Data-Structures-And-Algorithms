#include <iostream>
#include <algorithm>

using namespace std;

int arr[100000];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		int result = n;
		for (int i = 0; i < n; i++) { cin >> arr[i]; }
		sort(arr, arr + n);
		int i = n - 1, j = n / 2 - 1;
		while (i >= n / 2 && j >= 0) {
			if (arr[i] >= arr[j] * 2) {
				result--;
				i--; j--;
			}
			else { j--; }
		}
		cout << result << endl;
	}
	return 0;
}