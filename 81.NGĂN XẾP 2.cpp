#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	stack<int> stk;
	string s;
	int n; cin >> n;
	int x;
	while (n--) {
		cin >> s;
		if (s == "PUSH") {
			cin >> x;
			stk.push(x);
		}
		else if (s == "POP") {
			if (stk.empty()) {
				continue;
			}
			else { stk.pop(); }
		}
		else if (s == "PRINT") {
			if (stk.empty()) {
				cout << "NONE" << endl;
			}
			else { cout << stk.top() << endl; }
		}
	}
}