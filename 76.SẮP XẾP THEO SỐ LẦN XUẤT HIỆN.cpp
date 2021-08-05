#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

map<int, int> mp1;

bool comp(int i, int j)
{
	if (mp1[i] == mp1[j]) return j > i;
	return mp1[i] > mp1[j];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while (test--)
	{
		int n, x;
		cin >> n;
		int arr[10000];
		map<int, int> mp2;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			x = arr[i];
			if (mp2[x] == 0)
			{
				mp2[x] = 1;
				mp1[x] = 1;
			}
			else
			{
				mp2[x]++;
				mp1[x]++;
			}
		}
		sort(arr, arr + n, comp);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;

	}
}