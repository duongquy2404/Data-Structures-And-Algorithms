#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		int arr[1000];
		cin >> n;
		int brr[1000];
		int j = 0;
		int count = 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			if (arr[i] != 0) {
				brr[j++] = arr[i];
				count++;
			}
		}
		sort(brr, brr + count);
		long long a = 0, b = 0;
		for (int i = 0; i < count; i++) {
			if (i % 2 == 0) {
				a = a * 10 + brr[i];
			}
			else {
				b = b * 10 + brr[i];
			}
		}
		cout << a + b << endl;
	}
}