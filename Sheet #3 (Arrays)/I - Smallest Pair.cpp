#include <iostream>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int size, result = 0, flag = 1;
        cin >> size;
        int* arr = new int[size];
        for (int x = 0; x < size; x++) cin >> arr[x];

        int min;
        for (int z = 1; z <= size; z++)
        {
            for (int x = z + 1; x <= size; x++)
            {
                result = (arr[z - 1] + arr[x - 1]) + (x - z);
                if (flag == 0 && min > result) min = result;
                if (flag)
                {
                    min = result;
                    flag = 0;
                }
                result = 0;
            }
        }
        cout << min << endl;
    }
    return 0;
}