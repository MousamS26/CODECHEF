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
		int z, y, a, b, c;
		cin >> z >> y >> a >> b >> c;
		if (z - y >= a + b + c)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
