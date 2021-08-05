#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n, in, de, co;
		cin >> n >> in >> de >> co;
		int arr[101] = { 0 };
		arr[1] = in;
		for (int i = 2; i <= n; i++) {
			if (i % 2 == 0) {
				arr[i] = min(arr[i - 1] + in, arr[i / 2] + co);
			}
			else {
				arr[i] = min(arr[i - 1] + in, arr[(i + 1) / 2] + co + de);
			}
		}
		cout << arr[n] << endl;
	}
	return 0;
}