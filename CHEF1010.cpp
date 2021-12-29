#include <iostream>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		string s; cin>> s;
		int c0 = 0, c1 = 0;
		for (auto ch : s)
		{
			ch == '1' ? c1++ : c0++;
		}
		int ans = max(0, min(c1, c0) - 1);
		cout<< ans <<'\n';
	}
	return 0;
}