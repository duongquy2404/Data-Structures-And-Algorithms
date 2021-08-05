#include <iostream>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		int arr[1000];
		int count = 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++) {
			if (arr[i] == 0) {
				count++;
			}
			else { break; }
		}
		cout << count << endl;
	}
}