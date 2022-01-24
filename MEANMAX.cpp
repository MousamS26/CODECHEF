#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

#include <iostream>
	using namespace std;

	int main() {
		int t = 0; cin >> t;
		for (int t1 = 0; t1 < t; t1++)
		{
			int n, sum = 0; cin >> n; int arr[n];
			for (int i = 0; i < n; i++)
			{	arr[i] = i + 1;
				sum += i;
			}
			if (sum % n == 0)
				arr[n - 1]++;
			for (int i = 0; i < n; i++)
				cout << arr[i] << " ";
			cout << endl;
		}
		return 0;
	}

	return 0;
}