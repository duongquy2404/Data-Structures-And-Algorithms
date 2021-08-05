#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[100];
	vector<int> vtr;
	int x = 0;
	for (int i = 0; i < n; i++) { cin >> arr[i]; }
	for (int i = 0; i < n; i++) {
		vtr.push_back(arr[i]);
		sort(vtr.begin(), vtr.end());
		cout << "Buoc " << x++ << ": ";
		for (int i = 0; i < vtr.size(); i++) { cout << vtr[i] << " "; }
		cout << endl;
	}
}