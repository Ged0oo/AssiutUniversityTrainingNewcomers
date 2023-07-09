#include <iostream>
using namespace std;

int main()
{	
	int n;
	cin >> n;
	for (int i = 1; i <= (4*n) ; i++)
	{
		for (int j = i; j < i + 3; j++) cout << j << " ";
		i += 3;
		cout << "PUM"<<endl;
	}
}