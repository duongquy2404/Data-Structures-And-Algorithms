#include <iostream>
#include <queue>

using namespace std;

const int mod = 1e9 + 7;
long long arr[2000000];

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
		priority_queue<long long, vector <long long> , greater<long long>> pq(arr, arr + n);
		long long cost = 0;
		while (pq.size() > 1) {
			long long value1 = pq.top();
			pq.pop();
			long long value2 = pq.top();
			pq.pop();
			cost = (cost + (value1 + value2) % mod) % mod;
			pq.push((value1 + value2) % mod);
		}
		cout << cost << endl;
	}

}