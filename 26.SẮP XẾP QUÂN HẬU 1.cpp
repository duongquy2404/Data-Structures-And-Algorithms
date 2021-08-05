#include <iostream>

using namespace std;

bool h[11], c[11], xuoi[22], nguoc[22];

void loading(int i, int n, int &count) {
	for (int j = 1; j <= n; j++) {
		if (!h[j] && !c[j] && !xuoi[i - j + n] && !nguoc[i + j - 1]) {
			h[j] = c[j] = xuoi[i - j + n] = nguoc[i + j - 1] = true;
			if (i == n) {
				count++;
			}
			else {
				loading(i + 1, n, count);
			}
			h[j] = c[j] = xuoi[i - j + n] = nguoc[i + j - 1] = false;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n, count = 0;
		cin >> n;
		loading(1, n, count);
		cout << count << endl;
	}
	return 0;
}