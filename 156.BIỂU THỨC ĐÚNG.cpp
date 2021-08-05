#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		string str; cin >> str;
		stack<char> stk;
		int xoa = 0, res = 0;
		for (int i = 0; i < str.size(); i++) {
			if (stk.size() == 0) {
				stk.push(str[i]);
			}
			else if (stk.top() == '[' && str[i] == ']') {
				stk.pop();
				xoa += 2;
			}
			else if (stk.top() == ']' && str[i] == '[') {
				res += stk.size() + xoa;
				stk.pop();
			}
			else if (str[i] == '[') {
				stk.push(str[i]);
			}
			else if (stk.top() == ']' && str[i] == ']') {
				stk.push(str[i]);
			}
			if (stk.size() == 0) { xoa = 0; }
		}
		cout << res << endl;
	}
}