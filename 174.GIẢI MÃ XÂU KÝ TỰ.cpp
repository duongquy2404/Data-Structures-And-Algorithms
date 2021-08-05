#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		string str; cin >> str;
		string result = "";
		stack<char> stk;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == ']') {
				string tmp = "";
				int heso = 0, dv = 1;
				while (stk.top() != '[') {
					tmp = stk.top() + tmp;
					stk.pop();
				}
				stk.pop();
				while (!stk.empty() && stk.top() >= '0' && stk.top() <= '9') {
					heso += (stk.top() - '0') * dv;
					dv *= 10;
					stk.pop();
				}
				if (heso == 0) { heso = 1; }
				for (int j = 0; j < heso; j++) {
					for (int k = 0; k < tmp.length(); k++) {
						stk.push(tmp[k]);
					}
				}
			}
			else {
				stk.push(str[i]);
			}
		}
		while (!stk.empty()) {
			result = stk.top() + result;
			stk.pop();
		}
		cout << result << endl;
	}
	return 0;
}