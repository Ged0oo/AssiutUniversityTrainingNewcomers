#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n=0, y=0, m=0, d=0;
	cin >> n;
	if (n >= 365)
	{
		y = n / 365;
		n -= y * 365;
	}
	if (n >= 30)
	{
		m = n / 30;
		n -= m * 30;
	}
	d = n;
	cout << y << " years"  << endl;
	cout << m << " months" << endl;
	cout << d << " days"   << endl;
	return 0;
}