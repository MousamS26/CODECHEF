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
		int x, y, z;
		cin >> x >> y >> z;
		cout << (x * z) - (x * y) << endl;
	}
	return 0;
}