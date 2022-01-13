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
		ll n, a;
		cin >> n >> a;
		if (a % 2 != 0)
		{
			if (n % 2 == 0)
				cout << "Even\n";
			else
				cout << "Odd\n";
		}
		else if (n == 1)
		{
			cout << "Even\n";
		}
		else
		{
			cout << "Impossible\n";
		}
	}

}
