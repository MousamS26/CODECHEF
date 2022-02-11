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
		int A, B, X, Y;
		cin >> A >> B >> X >> Y;
		cout << (X * Y >= A * B ? "YES\n" : "NO\n");
	}
	return 0;
}