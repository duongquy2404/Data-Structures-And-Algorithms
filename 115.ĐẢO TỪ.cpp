#include <iostream>
#include <string>;
#include <stack>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	cin.ignore();
	while (test--) {
		string str; getline(cin, str);
		stack<string> stk;
		string tmp = "";
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == ' ') {
				stk.push(tmp);
				tmp = "";
			}
			else {
				tmp += str[i];
			}
		}
		if (!tmp.empty()) {
			stk.push(tmp);
		}
		while (!stk.empty()) {
			cout << stk.top() << " ";
			stk.pop();
		}
		cout << endl;
	}
	return 0;
}