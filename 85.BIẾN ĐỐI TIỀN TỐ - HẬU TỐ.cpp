#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		string str; cin >> str;
		stack<string> stk;
		for (int i = str.size() - 1; i >= 0; i--) {
			if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
				string f = stk.top(); stk.pop();
				string s = stk.top(); stk.pop();
				string tmp = f + s + str[i];
				stk.push(tmp);
			}
			else { stk.push(string(1,str[i])); }
		}
		cout << stk.top() << endl;
	}
	return 0;
}