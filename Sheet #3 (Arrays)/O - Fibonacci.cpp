#include <iostream>
using namespace std;


int main()
{
    long long int times, first, second, sum;
    cin >> times;
    if(times==1) cout << 0 << endl;
    else if (times == 2) cout << 1 << endl;
    else
    {
        for (int i = 0; i < times; i++)
        {
            if (i <= 1)
            {
                first = 0;
                second = 1;
            }
            else
            {
                sum = first + second;
                first = second;
                second = sum;
            }
        }
        cout << sum << endl;
    }
}
