#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		int arr[100000];
		for (int i = 0; i < n; i++) { cin >> arr[i]; }
		stack<int> stk;
		stk.push(-1); stk.push(0);
		for (int i = 1; i < n; i++) {
			while (stk.top() != -1 && arr[stk.top()] <= arr[i]) {
				stk.pop();
			}
			cout << i - stk.top() << " ";
			stk.push(i);
		}
		cout << endl;
	}
	return 0;
}