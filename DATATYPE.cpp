#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int tt;
	cin >> tt;
	while (tt--)
	{
		int n, x;
		cin >> n >> x;

		if (n >= x)
		{
			cout << x << endl;
		}
		else
		{
			while (x > n)
			{
				x = x - n - 1;
			}
			cout << x << endl;
		}
	}
}
// 175 99 92