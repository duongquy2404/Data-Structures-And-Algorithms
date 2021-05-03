#include <iostream>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, k;
		cin >> n >> k;
		int arr[100000];
		bool kt = false;
		int x;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			if (arr[i] == k) { x = i; kt = true; }
		}
		if (kt == true) {
			cout << x + 1 << endl;
		}
		else { cout << "NO" << endl; }
	}
}