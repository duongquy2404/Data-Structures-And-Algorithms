#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		string str;
		cin >> str;
		int arr[41];
		arr[0] = 1; arr[1] = 1;
		if (str[0] == '0') {
			cout << 0 << endl;
			continue;
		}
		for (int i = 2; i <= str.size(); i++) {
			arr[i] = 0;
			if (str[i - 1] >= '1' && str[i - 1] <= '9') {
				arr[i] = arr[i - 1];
			}
			if (str[i - 2] == '1' || (str[i - 2] == '2' && str[i - 1] <= '6')) {
				arr[i] += arr[i - 2];
			}
		}
		cout << arr[str.size()] << endl;
	}
	return 0;
}