#include <iostream>
#include <cmath>

using namespace std;

void in(int arr[], int n) {
	for (int i = 0; i < n; i++) { cin >> arr[i]; }
}

void sortingArrBrr(int arr[], int brr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int value = brr[i];
		int location = i;
		for (int j = i + 1; j < n; j++) {
			if (value > brr[j]) {
				value = brr[j];
				location = j;
			}
		}
		swap(brr[i], brr[location]);
		swap(arr[i], arr[location]);
	}
}

int maximumAction(int arr[], int brr[], int n) {
	int count = 1;
	int location = 0;
	for (int i = 1; i < n; i++) {
		if (brr[location] <= arr[i]) {
			count++;
			location = i;
		}
	}
	return count;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int arr[1001], brr[1001];
		in(arr, n); in(brr, n);
		sortingArrBrr(arr, brr, n);
		cout << maximumAction(arr, brr, n) << endl;
	}
	return 0;
}