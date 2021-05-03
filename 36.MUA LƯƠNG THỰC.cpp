#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n, s, m;
		cin >> n >> s >> m;
		int x = 0;;
		int count = 0;
		int p = s - s / 7;
		while(x<s*m&&count<p){
			x += n;
			count++;
		}
		if (x<s*m) {
			cout << -1 << endl;
		}
		else { cout << count << endl; }
	}
}