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
		int X; cin >> X;
		string s; cin >> s;
		int cc(0), nn(0), dd(0);
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == 'C')cc += 2;
			else if (s[i] == 'N')nn += 2;
			else if (s[i] == 'D')cc++, nn++;
		}
		if (nn > cc)
		{
			cout << X * 40 << endl;
		}
		else if (cc > nn)
		{
			cout << X * 60 << endl;
		}
		else
		{
			cout << X * 55 << endl;
		}
	}
	return 0;
}