#include <iostream>
#include <algorithm>

#define swabInt(x,y) { *y = *y + *x; *x = *y - *x; *y = *y - *x; } 
using namespace std;

int main()
{
	int size;
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) cin >> arr[i];

	int *mx = max_element(arr, arr + size);
	int *mn = min_element(arr, arr + size);

	swabInt(mx , mn);
	for (int i = 0; i < size; i++) cout << arr[i] << " ";	
}
