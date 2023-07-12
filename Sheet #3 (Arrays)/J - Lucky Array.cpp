#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	int size, min , counter=0;
	cin >> size;
	int* arr = new int[size];
	min = arr[0];
	for (int i = 0 ; i < size ; i++)
	{
		cin >> arr[i];
		if (!i) { min = arr[0]; counter = 1; }
		else if (arr[i] < min)
		{
			min = arr[i];
			counter = 1;
		}
		else if (min == arr[i]) ++counter;
	}
	if (counter % 2) cout << "Lucky";
	else cout << "Unlucky";
}