#include <iostream>

using namespace std;


string check(long long a[],long long n,long long k)
{
	long long tong = a[0];
	if (tong == k)return "YES";
	int j = 0;
	for (int i = 1; i < n; i++)
	{
		tong += a[i];
		while (tong > k && j < i)
		{
			tong -= a[j];
			j++;
		}
		if (tong == k)return "YES";
	}
	return "NO";
}
int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		long long n, k;
		cin >> n >> k;
		long long a[100005];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		cout << check(a,n,k) << endl;
	}
}