#include <iostream>
#include <stack>

using namespace std;

string loading(string str) {
	stack<int> stk;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(') {
			stk.push(i);
		}
		else if (str[i] == ')') {
			int top = stk.top(); stk.pop();
			if (top == 0) {
				continue;
			}
			else if (str[top - 1] == '+') {
				continue;
			}
			else if (str[top - 1] == '-') {
				for (int j = top + 1; j < i; j++) {
					if (str[j] == '+') {
						str[j] = '-';
					}
					else if (str[j] == '-') {
						str[j] = '+';
					}
				}
			}
		}
	}
	string s = "";
	for (int i = 0; i < str.length(); i++) {
		if (str[i] != '(' && str[i] != ')') {
			s += str[i];
		}
	}
	return s;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		string str; cin >> str;
		string tmp; cin >> tmp;
		str=loading(str);
		tmp=loading(tmp);
		if (tmp == str) {
			cout << "YES" << endl;
		}
		else { cout << "NO" << endl; }
	}
	return 0;
}