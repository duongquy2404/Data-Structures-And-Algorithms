#include <iostream>
#include <set>

using namespace std;

long long arr[1000000];
void sapxepcs(long long arr[], int n) {
	set<int> st;
	for (int i = 0; i < n; i++) {
		while (arr[i] > 0) {
			st.insert(arr[i] % 10);
			arr[i] /= 10;
		}
	}
	for (set<int>::iterator it = st.begin(); it != st.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) { cin >> arr[i]; }
		sapxepcs(arr, n);
	}
}