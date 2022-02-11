#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int tt;
	cin >> tt;
	while (tt--)
	{
		int N; cin >> N;
		int A[N], count(0), check(0);
		for (int i = 1; i <= N; ++i)
		{
			cin >> A[i];
			check = i + count;
			if (check == A[i])
				count++;
		}
		cout << count << endl;
	}
	return 0;
}