#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--)
	{
		int n, k, x;
		cin >> n >> k >> x;

		int counter = 0;
		vector<int> v;
		for (int i = 0 ; i < n ; i++)
		{
			if (x > k)
			{
				cout << -1 << endl;
				break;
			}
			if (counter == k)
				counter = 0;
			if (counter == x)
				v.push_back(counter + 1);
			else
				v.push_back(counter);

			cout << v[i] << " ";
			counter++;
		}

		cout << endl;
	}
	return 0;
}