#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int k; cin >> k;
		string a, b; cin >> a >> b;
		while (true) {
			if (a.length() > b.length()) {
				b = '0' + b;
			}
			else if (a.length() < b.length()) {
				a = '0' + a;
			}
			else { break; }
		}
		string result = "";
		int len = a.length();
		int nho = 0;
		for (int i = len - 1; i >= 0; i--) {
			int tmp = int(a[i] - '0') + int(b[i] - '0') + nho;
			result = char(tmp % k + '0') + result;
			nho = tmp / k;
		}
		if (nho > 0) {
			result = char(nho + '0') + result;
		}
		cout << result << endl;
	}
	return 0;
}