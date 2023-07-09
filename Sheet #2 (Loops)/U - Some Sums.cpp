#include <iostream>
using namespace std;

int getSumDigits(int n)
{
	int mySum = 0;
	while (n)
	{
		mySum += n % 10;
		n /= 10;
	}
	return mySum;
}

int main()
{	
	int n, a, b, sum=0;
	cin >> n >> a >> b;
	for (int i = 1 ; i <= n ; i++)
	{
		int num = getSumDigits(i);
		if (num >= a && num <= b) sum += i;
	}
	cout << sum;
}