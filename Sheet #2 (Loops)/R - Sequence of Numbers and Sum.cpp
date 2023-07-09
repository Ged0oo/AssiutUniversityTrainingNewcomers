#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	while (1)
	{
		int one, two;
		cin >> one >> two;
		if((one<=0) | (two<=0)) break;
		int mx = max(one, two);
		int mn = min(one, two);
		int sum = ((mx - mn + 1) * (mn + mx) / 2);
		for(int i = mn ; i <= mx ; i++) cout<<i<<" ";
		cout << "sum =" << sum << endl;
	}	
}