#include <iostream>
#include <queue>

using namespace std;

int arr[1000000];

void fastIO() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	fastIO();
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) { cin >> arr[i]; }
		priority_queue<int, vector<int>, greater<int>> pq(arr, arr + n);
		long long cost = 0;
		while (pq.size() > 1) {
			int value1 = pq.top();
			pq.pop();
			int value2 = pq.top();
			pq.pop();
			cost += value1 + value2;
			pq.push(value1 + value2);
		}
		cout << cost << endl;
	}

}