#include <iostream>
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
		int n, r;
		cin >> n;
		int reverse = 0;
		while (n)
		{
			r = n % 10;
			reverse = reverse * 10 + r;
			n /= 10;
		}
		cout << reverse << endl;
	}
}