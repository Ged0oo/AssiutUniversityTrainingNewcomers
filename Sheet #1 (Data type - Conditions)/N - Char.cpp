#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	char ch;
	cin >> ch;
	if ((ch >= 65) && (ch <= 90)) cout << char(ch + 32) << endl;	
	else if ((ch >= 97) && (ch <= 122)) cout << char(ch - 32) << endl;
	return 0;
}
