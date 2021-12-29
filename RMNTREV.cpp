#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif
	int t;
	cin >> t;
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		string s;
		cin >> s;

		string ans = "";
		int i = 0, j = k-1;
		while(i<j){
			ans += s[i];
			ans += s[j];
			i++;
			j--;
		}
		if (i==j) ans += s[i];

		reverse(ans.begin(), ans.end());
		ans += s.substr(k, n-k);

		cout <<ans<< endl;
	}
}