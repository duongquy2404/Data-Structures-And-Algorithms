#include <iostream>
#include <deque>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	deque<int> deq;
	while (test--) {
		string s; cin >> s;
		if (s == "PUSHFRONT") {
			int n; cin >> n;
			deq.push_front(n);
		}
		else if (s == "PRINTFRONT") {
			if (deq.empty()) {
				cout << "NONE" << endl;
			}
			else { cout << deq.front() << endl; }
		}
		else if (s == "POPFRONT") {
			if (!deq.empty()) { deq.pop_front(); }
		}
		else if (s == "PUSHBACK") {
			int n; cin >> n;
			deq.push_back(n);
		}
		else if (s == "PRINTBACK") {
			if (deq.empty()) {
				cout << "NONE" << endl;
			}
			else { cout << deq.back() << endl; }
		}
		else if (s == "POPBACK") {
			if (!deq.empty()) { deq.pop_back(); }
		}
	}
}