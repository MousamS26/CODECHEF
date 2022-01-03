#include<bits/stdc++.h>
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
		int n;
		cin >> n;
		int sq = sqrt(n);
		cout << sq << endl;
	}
}
