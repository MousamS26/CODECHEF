#include<bits/stdc++.h>
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
		int N, x, y;
		cin >> N >> x >> y;
		if ((x + y) % 2 == 0)
			cout << 0 << endl;
		else
			cout << 1 << endl;
	}

}