#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n1, n2;
	cin >> n1 >> n2;
	if (n1 > n2)
	{
		cout << n1 - n2;
	}
	else
	{
		cout << n1 + n2;
	}
}
