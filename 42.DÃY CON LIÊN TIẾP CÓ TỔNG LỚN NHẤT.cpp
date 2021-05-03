#include <iostream>

using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		int arr[1000];
		for (int i = 0; i < n; i++) { cin >> arr[i]; }
		int sumLengthMax = 0;
		for (int i = 0; i < n; i++) {
			int sumLength = 0;
			for(int j=i;j<n;j++){
				sumLength += arr[j];
				if (sumLength > sumLengthMax) {
					sumLengthMax = sumLength;
				}
			}
		}
		cout << sumLengthMax << endl;
	}
}