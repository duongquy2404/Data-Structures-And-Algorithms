#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		long long arr[100000];
		long long area = 0, areaMax = 0;
		for (int i = 0; i < n; i++) { cin >> arr[i]; }
		stack<int> stk;
		int i = 0;
		while (i < n) {
			if (stk.empty() || arr[i] >= arr[stk.top()]) {
				stk.push(i++);
			}
			else {
				int tmp = stk.top();
				stk.pop();
				area = arr[tmp] * (stk.empty() ? i : i - stk.top() - 1);
				if (area > areaMax) { areaMax = area; }
			}
		}
		while (!stk.empty()) {
			int tmp = stk.top();
			stk.pop();
			area = arr[tmp] * (stk.empty() ? i : i - stk.top() - 1);
			if (area > areaMax) { areaMax = area; }
		}
		cout << areaMax << endl;
	}
	return 0;
}