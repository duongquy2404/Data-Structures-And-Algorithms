#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		string str; cin >> str;
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
		for (int i = 0; i < str.length(); i++) {
			if (str[i] != '(' && str[i] != ')') {
				cout << str[i];
			}
		}
		cout << endl;
	}
	return 0;
}