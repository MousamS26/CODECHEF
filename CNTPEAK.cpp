#include <iostream>
#include<math.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		long long int answer = 0;

		if (n == 3)
			cout << 10 << endl;
		else if (n > 3)
		{
			answer = pow(3, (n - 3)) * 8 * (n - 2);
			answer += answer / 4;
			cout << answer << endl;
		}
		else
			cout << 0 << endl;
	}
	return 0;
}