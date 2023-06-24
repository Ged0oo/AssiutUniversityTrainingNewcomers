#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	int arr[3], temp[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
		temp[i] = arr[i];
	}
	sort(arr, arr + 3);
	for (int i = 0; i < 3; i++)
	{
		cout << arr[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << temp[i] << endl;
	}
	return 0;
}