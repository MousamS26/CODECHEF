#include <iostream>
#include <string>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;

		for (int i = 0 ; i <= n ; i++) {
			if (s[i] == 'c' && s[i + 1] == 'o' && s[i + 2] == 'd' && s[i + 3] == 'e') {
				cout << "AC" << endl;
				break;
			}
			else if (s[i] == 'c' && s[i + 1] == 'h' && s[i + 2] == 'e' && s[i + 3] == 'f') {
				cout << "WA" << endl;
				break;
			}
			else {
				continue;
			}
		}

	}
}