#include <iostream>
#include <algorithm>
#include <iomanip>

#include <math.h>
using namespace std;

int main()
{
	int a, b;
	char ch;
	cin >> a >> ch >> b;

	switch (ch)
	{
	case '>' :
		if (a > b) cout << "Right";
		else cout << "Wrong";
		break;

	case '<':
		if (a < b) cout << "Right";
		else cout << "Wrong";
		break;

	case '=':
		if (a == b) cout << "Right";
		else cout << "Wrong";
		break;
	}
	return 0;
}