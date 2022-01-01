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
		int count = 0;
		string n;
		cin >> n;
		for (int i = 0; i < n.length(); i++)
		{
			if (n[i] == '4')
			{
				count++;
			}
		}
		cout << count << endl;

	}


}