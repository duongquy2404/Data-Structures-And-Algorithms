#include <iostream>
#include <set>

using namespace std;

void in(int arr[], int n) {
	for (int i = 0; i < n; i++) { cin >> arr[i]; }
}

void hop(int arr[], int brr[], int n, int m) {
	set<int> st;
	st.insert(arr, arr + n);
	st.insert(brr, brr + m);
	for (set<int>::iterator it = st.begin(); it != st.end(); it++) {
		cout << *it << " ";
	}
}

void giao(int arr[], int brr[], int n, int m) {
	set<int> st;
	int i = 0, j = 0;
	while (i < n && j < m) {
		if (arr[i] == brr[j]) {
			st.insert(arr[i]);
			i++; j++;
		}
		else if (arr[i] < brr[j]) {
			i++;
		}
		else {
			j++;
		}
	}
	for (set<int>::iterator it = st.begin(); it != st.end(); it++) {
		cout << *it << " ";
	}
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, m;
		cin >> n >> m;
		int arr[100000];
		int brr[100000];
		in(arr, n);
		in(brr, m);
		hop(arr, brr, n, m);
		cout << endl;
		giao(arr, brr, n, m);
		cout << endl;
	}
}