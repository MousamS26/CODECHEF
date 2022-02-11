#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int tt, sum(0);
	cin >> tt;
	while (tt--)
	{
		int n, m;
		cin >> n >> m;
		sum = n * m;
		cout << sum << endl;
	}
	return 0;
}