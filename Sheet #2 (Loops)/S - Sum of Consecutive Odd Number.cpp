#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int count;
	cin >> count;
	while (count--)
	{
		int one, two, sum = 0;
		cin >> one >> two;

		int mx = max(one, two);
		int mn = min(one, two);

		if (!(mn % 2)) mn--;
		while (mn < mx)
		{
			mn += 2;
			if (mn < mx) sum += mn;
			else break;
		}
		cout << sum << endl;
	}
}