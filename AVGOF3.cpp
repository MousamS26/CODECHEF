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
		int x, a, b, c;
		cin >> x;
		cout << x - 1 << " " << x + 1 << " " << x << endl;
	}
	return 0;
}