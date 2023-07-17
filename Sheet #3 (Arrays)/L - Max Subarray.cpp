#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	int tries;
	cin >> tries;
	while (tries--)
	{
		int size, max;
		cin >> size;
		int* arr = new int[size];
		for (int i = 0; i < size; i++) cin >> arr[i];

		for (int i = 0; i < size; i++) cout << arr[i] << " ";

		for (int i = 0; i < size; i++)
		{
			max = arr[i];
			for (int j = i + 1; j < size; j++)
			{
				if (arr[j] > max) max = arr[j];
				cout << max << " ";
			}
		}
		cout << endl;
	}
}
