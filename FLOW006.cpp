#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int r = 0;
		while (n > 0)
		{
			r += n % 10;
			n /= 10;
		}
		cout << r << endl;
	}

}
