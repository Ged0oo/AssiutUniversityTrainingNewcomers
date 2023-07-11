#include <iostream>
using namespace std;

int main()
{   
	int size;
	cin >> size;

    int *arr = new int[size];
    for (int i = 0; i < size; i++) cin >> arr[i];

	int min = arr[0] , pos=0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			pos = i;
		}
	}
	cout << min << " " << pos + 1;
}
