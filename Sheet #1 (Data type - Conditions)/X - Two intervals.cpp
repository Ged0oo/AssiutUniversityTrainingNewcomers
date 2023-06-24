#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	int l1, r1, l2, r2;
	cin >> l1 >> r1 >> l2 >> r2;
	if ((l2 >= l1) && (r1 >= l2))
	{
		int l = max(l1, l2);
		int r = min(r1, r2);
		cout << l << " " << r;
	}
	else if ((l1 >= l2) && (r2 >= l1))
	{
		int l = max(l1, l2);
		int r = min(r1, r2);
		cout << l << " " << r;
	}
	else cout << -1;
	return 0;
}