#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	cin.ignore();
	while (test--) {
		string str; getline(cin, str);
		stack<int> stk;
		int j = 1;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(') {
				cout << j << " ";
				stk.push(j++);
			}
			else if(str[i] == ')') {
				cout << stk.top() << " ";
				stk.pop();
			}
		}
		cout << endl;
	}
	return 0;
}