#include <bits/stdc++.h>
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
		double t1, t2, r1, r2;
		cin >> t1 >> t2 >> r1 >> r2;

		double x = (pow(t1, 2) / pow(r1, 3));
		double y = (pow(t2, 2) / pow(r2, 3));

		x == y ? cout << "Yes\n" : cout << "No\n";
	}
}