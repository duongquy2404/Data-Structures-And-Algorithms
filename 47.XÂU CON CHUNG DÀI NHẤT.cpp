#include <iostream>
#include <cstring>

using namespace std;

int arr[1001][1001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		string str1, str2;
		cin >> str1 >> str2;
		int count = 0;
		memset(arr, 0, sizeof(arr));
		for (int i = 1; i <= str1.size(); i++) {
			for (int j = 1; j <= str2.size(); j++) {
				if (str1[i - 1] == str2[j - 1]) {
					arr[i][j] = arr[i - 1][j - 1] + 1;
				}
				else {
					arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
				}
				count = max(count, arr[i][j]);
			}
		}
		cout << count << endl;
	}
}