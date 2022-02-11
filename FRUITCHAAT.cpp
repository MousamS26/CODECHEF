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
		int X, Y;
		cin >> X >> Y;
		cout << min(X / 2, Y) << endl;
	}
	return 0;
}