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
		int k; cin >> k;
		int bruh = 52 % k;
		cout << bruh << endl;
	}
	return 0;
}

