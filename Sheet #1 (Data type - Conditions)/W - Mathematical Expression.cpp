#include <iostream>
#include <algorithm>
#include <iomanip>

#include <math.h>
using namespace std;

int main()
{
	int a, b, c;
	char s,q;
	cin >> a >> s >> b >> q >> c;

	switch (s)
	{
	case '+' :
		if (a + b == c) cout << "Yes";
		else cout << a+b;
		break;

	case '-':
		if (a - b == c) cout << "Yes";
		else cout << a-b;
		break;

	case '*':
		if (a * b == c) cout << "Yes";
		else cout << a*b;
		break;
	}
	return 0;
}