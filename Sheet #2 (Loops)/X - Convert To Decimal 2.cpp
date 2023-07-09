#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num, times;
    cin >> times;

    while (times--)
    {
        cin >> num;
        int ones = 0;
        int plus = 0;
        int dec = 0;

        while (num)
        {
            if ((num%2)==1)
            {
                ones++;
                dec += 1 * pow(2, plus);
                plus++;
            }
            num /= 2;
        }
        cout << dec << endl;
    }
}