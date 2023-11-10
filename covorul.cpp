#include <iostream>
using namespace std;
int min(int, int);
int max(int, int);
int main()
{
	int n, m, maxx, minn, nrc=0;
	cin >> n >> m;
	cout << min(n,m) << ' ';
	while (n && m)
	{
		maxx = max(n,m);
		minn = min(n,m);
		nrc += maxx/minn;
		if (n > m) n %= minn;
		else m %= minn;
	}
	cout << nrc;
	return 0;
}
int min(int a, int b)
{
	return a < b ? a : b;
}
int max(int a, int b)
{
	return a > b ? a : b;
}
// scor 100
