#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	char ch;
	cin >> ch;
	if ((ch >= 65) && (ch <= 90))
	{
		cout << "ALPHA" << endl;
		cout << "IS CAPITAL";
	}	
	else if ((ch >= 97) && (ch <= 122))
	{
		cout << "ALPHA" << endl;
		cout << "IS SMALL";
	}
	else if ((ch >= 48) && (ch <= 57)) cout << "IS DIGIT";
	return 0;
}