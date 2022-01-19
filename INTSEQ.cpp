#include <iostream>
#include <algorithm>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--)
	{
		long long k, ans(0); cin >> k;
		while (k > 1)
		{
			if (k % 2 == 0)
				ans++;
			else
				break;
			k = k / 2;
		}
		cout << ans << endl;
	}
	return 0;
}

