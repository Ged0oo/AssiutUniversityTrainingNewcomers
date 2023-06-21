#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
 
 
int main()
{
	long int a,b;
	cin >> a >> b;
 
	if ((a % b == 0) || (b % a == 0))
		cout << "Multiples";
	else
		cout << "No Multiples";
	return 0;
}