#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> vtr;
queue<int> que;

bool different(int n) {
	int arr[10] = { 0 };
	while (n > 0) {
		arr[n % 10]++;
		if (arr[n % 10] > 1) { return false; }
		n /= 10;
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	que.push(0);
	while (que.front() <= 543210) {
		for (int i = 0; i <= 5; i++) {
			if(que.front() != 0 || i != 0){
				que.push(que.front() * 10 + i);
			}
		}
		if (different(que.front())) {
			vtr.push_back(que.front());
		}
		que.pop();
	}
	int m = vtr.size();
	int test; cin >> test;
	while (test--) {
		int l, r, count = 0;
		cin >> l >> r;
		for (int i = 0; i < m; i++) {
			if (vtr[i] < l) {
				continue;
			}
			else if (vtr[i] >= l && vtr[i] <= r) {
				count++;
			}
			else { break; }
		}
		cout << count << endl;
	}
	return 0;
}