#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	long long int a, b;
	cin >> a >> b;

	a %= 10;
	b %= 10;

	cout << a + b << endl;
	return 0;
}