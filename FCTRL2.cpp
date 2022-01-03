#include<bits/stdc++.h>
using namespace std;

int fac(int m)
{
	if (m == 0)
		return 1;
	return m * fac(m - 1);
}

int main() {
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
		cout << fac(n) << endl;
	}
}
