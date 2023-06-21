#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	const double bi = 3.141592653;
	double a, r;
	cin >> r ;
	a = bi * r * r;
	cout.precision(12);
	cout << a << endl;
	return 0;
}