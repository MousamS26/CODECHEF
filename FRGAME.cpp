#include <iostream>
#include <string>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int T;
	cin >> T;
	while (T--)
	{
		int A, B, C, D;
		cin >> A >> B >> C >> D;

		if (A >= B) {
			B += C;
		}
		else {
			A += C;
		}
		if (A >= B) {
			B = +D;
		}
		else {
			A = +D;
		}

		if (A < B)
		{
			cout << "S\n";
		}
		else
		{
			cout << "N\n";
		}
	}

}