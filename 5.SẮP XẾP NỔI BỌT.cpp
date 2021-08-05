#include <iostream>

using namespace std;

int main() {
	int n;
	int arr[100];
	cin >> n;
	for (int i = 0; i < n; i++) { cin >> arr[i]; }
	int x = 1;
	for (int i = 0; i < n; i++) {
		bool haveSwap = false;
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				haveSwap = true;
			}
		}
		if (haveSwap == false) { break; }
		cout << "Buoc " << x++ << ": ";
		for (int k = 0; k < n; k++) { cout << arr[k] << " "; }
		cout << endl;
	}
}