#include <iostream>
#include <vector>

using namespace std;

void out(int arr[],int n) {
	cout << "[";
	for (int i = 0; i < n; i++) {
		cout << arr[i];
		if (i != n - 1) {
			cout << " ";
		}
	}
	cout << "]" << endl;
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		int arr[10];
		for (int i = 0; i < n; i++) { cin >> arr[i]; }
		out(arr,n);
		while (n > 1) {
			for (int i = 0; i < n - 1; i++) {
				arr[i] = arr[i] + arr[i + 1];
			}
			n--;
			out(arr,n);
		}
	}
}