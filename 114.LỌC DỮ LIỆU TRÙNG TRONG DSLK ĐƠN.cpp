#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, k; cin >> n;
	list<int> lis;
	for(int i=0;i<n;i++){
		cin >> k;
		if (find(lis.begin(), lis.end(), k) == lis.end()) { lis.push_back(k); }
	}
	for (list<int>::iterator j = lis.begin(); j != lis.end(); j++) {
		cout << *j << " ";
	}
	return 0;
}