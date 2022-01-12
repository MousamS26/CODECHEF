#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int tt;
	cin >> tt;
	while (tt--)
	{
		ll a1, a2, b1, b2, c1, c2;
		cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
		if (a1 + a2 > b1 + b2 && a1 + a2 > c1 + c2)
		{
			cout << a1 + a2 << endl;
		}
		else if (b1 + b2 > a1 + a2 && b1 + b2 > c1 + c2)
		{
			cout << b1 + b2 << endl;
		}
		else
			cout << c1 + c2 << endl;
	}

}
