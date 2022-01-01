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
		int last = n % 10;
		int first;
		while (n)
		{
			first = n % 10;
			n /= 10;
		}
		cout << first + last << endl;
	}


}