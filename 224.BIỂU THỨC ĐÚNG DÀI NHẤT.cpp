#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		string str; cin >> str;
		stack<int> stk;
		int sumLen = 0;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(') {
				stk.push(i);
			}
			else {
				if (!stk.empty()) {
					stk.pop();
					sumLen += 2;
				}
			}
		}
		cout << sumLen << endl;
	}
	return 0;
}