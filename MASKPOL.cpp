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
		int n, a;
		cin >> n >> a;
		int x = n - a;
		cout << min(x, a) << endl;
	}
	return 0;
}