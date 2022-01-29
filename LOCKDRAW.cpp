#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int t; cin >> t;
	while (t--)
	{
		int A, B, C;
		cin >> A >> B >> C;
		if (A == (B + C) || B == (A + C) || C == (A + B))
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
	return 0;
}
