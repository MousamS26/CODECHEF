#include <iostream>
#include <algorithm>
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
		int Xa, Xb, Xc, A(0), B(0), C(0);
		cin >> Xa >> Xb >> Xc;


		if (Xa > 50)
			A += 1;
		if (Xb > 50)
			B += 1;
		if (Xc > 50)
			C += 1;
		if (A == 1)
			cout << "A\n";
		if (B == 1)
			cout << "B\n";
		if (C == 1)
			cout << "C\n";
		if ( A == 0 && B == 0 && C == 0)
			cout << "NOTA\n";
	}
	return 0;
}

