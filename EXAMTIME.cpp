#include<bits/stdc++.h>
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
		int d1, t1, m1, d2, t2, m2;
		cin >> d1 >> t1 >> m1;
		cin >> d2 >> t2 >> m2;
		int dragon = t1 + m1 + d1;
		int sloth = t2 + m2 + d2;
		if (dragon > sloth)
		{
			cout << "Dragon\n";
		}
		if (sloth > dragon)
		{
			cout << "Sloth\n";
		}
		if (dragon == sloth)
		{
			if (d1 > d2)
			{
				cout << "Dragon\n";
			}
			if (d2 > d1)
			{
				cout << "Sloth\n";
			}

			if (d1 == d2)
			{
				if (t1 > t2)
				{
					cout << "Dragon\n";
				}
				if (t2 > t1)
				{
					cout << "Sloth\n";
				}
				if (t1 == t2)
				{
					cout << "Tie\n";
				}
			}
		}
	}
}