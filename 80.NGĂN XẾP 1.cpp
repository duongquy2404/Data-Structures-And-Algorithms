#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	stack<int> stk;
	string s;
	int n;
	while (cin >> s) {
		if (s == "push") {
			cin >> n;
			stk.push(n);
		}
		else if (s == "pop") {
			stk.pop();
		}
		else {
			vector<int> vtr;
			if (stk.empty()) { cout << "empty" << endl; }
			while (!stk.empty()) {
				vtr.push_back(stk.top());
				stk.pop();
			}
			for (int i = vtr.size() - 1; i >= 0; i--) {
				stk.push(vtr[i]);
				cout << vtr[i] << " ";
			}
		}
		cout << endl;
	}
}