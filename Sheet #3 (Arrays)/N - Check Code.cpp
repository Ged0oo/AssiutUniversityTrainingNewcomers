#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a, b;
	bool flag = true;
	string str;
	cin >> a >> b >> str;
	int size = a + b + 1;
	if (str[a] != '-') flag = false;
	if (flag)
	{
		for (int i = 0; i < a; i++)
		{
			if (!(str[i] >= '0' && str[i] <= '9')) flag = false;
		}
		for (int i = a + 1; i < size; i++)
		{
			if (!(str[i] >= '0' && str[i] <= '9')) flag = false;
		}
	}
	if (flag) cout << "Yes";
	else cout << "No";
}
