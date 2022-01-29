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
		int n, x, y;
		cin >> n >> x >> y;
		int arr1[n];
		for (int i = 0; i < n; i++) {
			cin >> arr1[i];
		}

		bool checker = true;
		for (int i = 0; i < n; i++) {
			int temp;
			cin >> temp;
			if ((temp - arr1[i] != x) && (temp - arr1[i] != y)) {
				checker = false;
			}
		}
		if (checker)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}