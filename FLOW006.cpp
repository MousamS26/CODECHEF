#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	int ans = 0;
	while (t--)
	{
		string n;
		for (int i = 0; i < n.length(); i++)
		{
			ans = n[0] + n.back();
		}
		cout << ans << endl;
	}

}