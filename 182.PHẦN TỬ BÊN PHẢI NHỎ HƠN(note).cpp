#include <iostream>

using namespace std;

int a[1000000], c1[1000000], c2[1000000];

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)cin >> a[i];
		int j;
		for (int i = 1; i < n; i++)
		{
			if (i == n - 1)c1[i] = -1;
			else
			{
				for (j = i + 1; j < n; j++)
				{
					if (a[j] < a[i])
					{
						c1[i] = a[j];
						break;
					}
				}
				if (j == n)c1[i] = -1;
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (i >= n - 2)c2[i] = -1;
			else
			{
				for (j = i + 1; j < n; j++)
				{
					if (a[j] > a[i])
					{
						c2[i] = c1[j];
						break;
					}
				}
				if (j == n)c2[i] = -1;
			}
		}
		//		int i;
		for (int i = 0; i < n; i++)cout << c2[i] << " ";
		cout << endl;
	}
}