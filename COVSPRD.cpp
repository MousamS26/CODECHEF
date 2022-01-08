#include <bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int tt;
	cin >> tt;
	while (tt--)
	{
		long n, d, infected(1);
		cin >> n >> d;
		for (long i = 1; i <= d; i++)
		{
			if (i <= 10)
			{
				infected = infected * 2;
				if (infected > n)
				{
					infected = n;
					break;
				}
			}
			else
			{
				infected = infected * 3;
				if (infected > n)
				{
					infected = n;
					break;
				}
			}
		}
		cout << infected << endl;
	}
}