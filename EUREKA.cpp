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
		int n;
		cin >> n;
		double k = pow(0.143 * n, n);
		cout << round(k) << endl;
	}
	return 0;
}