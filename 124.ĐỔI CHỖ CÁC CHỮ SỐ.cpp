#include <iostream>
#include <string>

using namespace std;

void swapString(string str, int k, string& maxStr) {
	if (k == 0) { return; }
	for (int i = 0; i < str.size() - 1; i++) {
		for (int j = i + 1; j < str.size(); j++) {
			if (str[i] < str[j]) {
				swap(str[i], str[j]);
				if (str.compare(maxStr) > 0) {
					maxStr = str;
				}
				swapString(str, k - 1, maxStr);
				swap(str[i], str[j]);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int k; cin >> k;
		string str; cin >> str;
		string maxStr = str;
		swapString(str, k, maxStr);
		cout << maxStr << endl;
	}
	return 0;
}