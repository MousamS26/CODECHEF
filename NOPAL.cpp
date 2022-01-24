#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int tt = 1;
	cin >> tt;
	while (tt--)
	{
		int n, x(0);
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			if (x == 26)
				x = 0;
			cout << char(x + 97);
			x++;
		}
		cout << endl;
	}
	return 0;
}