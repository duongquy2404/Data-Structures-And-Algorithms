#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		string str; cin >> str;
		stack<int> stk;
		string result = "";
		for (int i = 0; i <= str.length(); i++) {
			stk.push(i + 1);
			if (i == str.length() | str[i] == 'I') {
				while (!stk.empty()) {
					result += to_string(stk.top());
					stk.pop();
				}
			}
		}
		cout << result << endl;
	}
	return 0;
}