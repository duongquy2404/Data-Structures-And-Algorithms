#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int arr[105][105];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		string str1, str2;
		cin >> str1 >> str2;
		int len1 = str1.length();
		int len2 = str2.length();
		memset(arr, 0, sizeof(arr));
		for (int i = 0; i <= len1; i++) {
			for (int j = 0; j <= len2; j++) {
				if (i == 0 || j == 0) {
					arr[i][j] = i + j;
				}
				else if (str1[i - 1] == str2[j - 1]) {
					arr[i][j] = arr[i - 1][j - 1];
				}
				else {
					arr[i][j] = min(arr[i - 1][j - 1], min(arr[i][j - 1], arr[i - 1][j])) + 1;
				}
			}
		}
		cout << arr[len1][len2] << endl;
	}
	return 0;
}