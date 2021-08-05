#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		string str; cin >> str;
		stack<char> stk;
		bool check = false;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == ')') {
				int top = stk.top();
				stk.pop();
				bool kt = false;
				while (!stk.empty() && top != '(') {
					if (top == '+' || top == '-' || top == '*' || top == '/') {
						kt = true;
					}
					top = stk.top();
					stk.pop();
				}
				if (kt == false) { check = true; }
			}
			else {
				stk.push(str[i]);
			}
			if (check == true) { break; }
		}
		if (check == true) {
			cout << "Yes" << endl;
		}
		else { cout << "No" << endl; }
	}
	return 0;
}