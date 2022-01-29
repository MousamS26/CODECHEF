#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int t = 0; cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int>v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		double sum1 = 0.0;
		for (int i = 0; i < n - 1; i++) {
			sum1 += v[i];
		}
		cout << setprecision(6) << fixed << sum1 / (n - 1) + v[n - 1] << endl;

	}
	return 0;
}
