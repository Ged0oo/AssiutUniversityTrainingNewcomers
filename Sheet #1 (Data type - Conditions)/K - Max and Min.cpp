#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;


int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int mx = max(a, max(b, c));
	int mn = min(a, min(b, c));

	cout << mn << " " << mx << endl;
	return 0;
}