#include <iostream>
using namespace std;
int main()
{    
	long long int counter, sum = 0, cur;
	cin >> counter;
	while (counter--)
	{
		cin >> cur;
		sum += cur;
	}
	cout << abs(sum);
}
