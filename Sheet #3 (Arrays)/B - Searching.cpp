#include <iostream>
using namespace std;

int main()
{   
	int size;
	bool flag = false;
	cin >> size;

    int *arr = new int[size];
    for (int i = 0; i < size; i++) cin >> arr[i];

	int key;
	cin >> key;
	for (int i = 0; i < size; i++)
	{
		if (key == arr[i])
		{
			flag = true;
			cout << i;
			break;
		}	
	}
	if (!flag) cout << -1;
}
