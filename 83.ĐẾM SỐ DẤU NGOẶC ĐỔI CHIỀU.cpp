#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		string str; cin >> str;
		int changeMin = 0;
		stack<char> stk;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == ')') {
				if (!stk.empty() && stk.top() == '(') {
					stk.pop();
					continue;
				}
			}
			stk.push(str[i]);
		}
		int n = stk.size();
		while (!stk.empty() && stk.top() == '(') {
			stk.pop();
			changeMin++;
		}
		cout << n / 2 + changeMin % 2 << endl;
	}
	return 0;
}