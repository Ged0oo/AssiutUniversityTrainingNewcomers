#include <iostream>
using namespace std;

int main()
{   
	int size, flag=true;
	cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++) cin >> arr[i];
	
	for (int i = 0 , j = size - 1; (i < size / 2) && (j >= size / 2); j--, i++)
	{
		if (arr[i] != arr[j]) { flag = false; break; }
	}

	if (flag) cout << "YES";
	else cout << "NO";
}