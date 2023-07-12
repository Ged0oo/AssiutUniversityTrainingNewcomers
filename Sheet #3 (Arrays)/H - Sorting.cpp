#include <iostream>
using namespace std;

#define swabInt(x,y) { *y = *y + *x; *x = *y - *x; *y = *y - *x; }

int main()
{   
	int size;
	cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++) cin >> arr[i];

	for (int i = 0 ; i < size ; i++)
	{
		for (int j = i + 1; j < size; j++)
			if (arr[j] < arr[i]) swabInt(&arr[i], &arr[j]);
	}

	for (int i = 0; i < size; i++) cout << arr[i] << " ";
}