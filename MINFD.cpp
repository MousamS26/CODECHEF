#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int tt;
	cin >> tt;
	while (tt--) {
		int n, x;
		cin >> n >> x;
		int arr[n];

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + n);
		int sum = 0;
		int count = 0;

		for (int i = 0; i < n; i++) {
			if (sum < x) {
				sum = sum + arr[n - 1 - i];
				count++;
			}
			else {
				break;
			}
		}

		if (sum < x) {
			cout << -1 << endl;
		}
		else {
			cout << count << endl;
		}
	}
}