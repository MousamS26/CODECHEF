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
		int n, count(0); cin >> n;
		while (n--)
		{
			if (n == 1)
			{
				count = 2;
			}
			else
			{
				int x, y; cin >> x >> y;

			}
			cout << count << endl;
		}
	}
	return 0;
}