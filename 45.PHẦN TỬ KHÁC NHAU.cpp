#include <iostream>

using namespace std;

int arr[1000000];
int brr[1000000];

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		int x = n;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		for (int i = 0; i < n - 1; i++) {
			cin >> brr[i];
		}
		for (int i = 0; i < n - 1; i++) {
			if (arr[i] != brr[i]) {
				x = i + 1;
				break;
			}
		}
		cout << x << endl;
	}
}