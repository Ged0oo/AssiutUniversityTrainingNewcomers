#include <iostream>
#include <algorithm>
#include <iomanip>

#include <math.h>
using namespace std;

int main()
{
	float x, y;
	cin >> x;
	y = int(x / 1);
	if (x == y) cout << "int " << y;
	else cout << "float " << setprecision(3) << y << " " << x - y;
	return 0;
}