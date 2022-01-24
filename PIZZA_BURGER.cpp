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
		int x, y, z;
		cin >> x >> y >> z;
		if (x >= y && x < z)
			cout << "PIZZA\n";
		else if (x >= z && x < y)
			cout << "BURGER\n";
		else if (x >= z && x >= y)
			cout << "PIZZA\n";
		else
			cout << "NOTHING\n";
	}
	return 0;
}