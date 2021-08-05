#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		string s; cin >> s;
		int lenMax = 0;
		stack<int> stk;
		stk.push(-1);
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '(') {
				stk.push(i);
			}
			else {
				stk.pop();
				if (stk.size() > 0) { lenMax = max(lenMax, i - stk.top()); }
				if (stk.size() == 0) { stk.push(i); }
			}
		}
		cout << lenMax << endl;
	}
}