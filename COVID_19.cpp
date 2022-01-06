#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--)
	{
		int n, m, i, j;
		cin >> n >> m;
		if (n % 2 == 1)
			i = (n / 2) + 1;
		else
			i = n / 2;
		if (m % 2 == 1)
			j = (m / 2) + 1;
		else
			j = m / 2;
		cout << i * j << endl;
	}
}
