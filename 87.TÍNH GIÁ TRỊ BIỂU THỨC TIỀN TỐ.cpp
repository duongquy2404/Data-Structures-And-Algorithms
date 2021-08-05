#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		string str; cin >> str;
		stack<long long> stk;
		for (int i = str.size() - 1; i >= 0; i--) {
			if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
				long long f = stk.top(); stk.pop();
				long long s = stk.top(); stk.pop();
				long long tmp;
				if (str[i] == '+') {
					tmp = f + s;
				}
				else if (str[i] == '-') {
					tmp = f - s;
				}
				else if (str[i] == '*') {
					tmp = f * s;
				}
				else { tmp = f / s; }
				stk.push(tmp);
			}
			else { stk.push(stoll(string(1, str[i]))); }
		}
		cout << stk.top() << endl;
	}
	return 0;
}