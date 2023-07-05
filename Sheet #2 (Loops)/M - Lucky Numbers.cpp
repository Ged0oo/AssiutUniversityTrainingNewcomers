#include <iostream>
#include <math.h>
#include <cmath>
#include <algorithm>
using namespace std;

bool coutDigits(int n)
{
    int rem, iflag = true;
    while (n)
    {
        rem = n % 10;
        n /= 10;
        if (rem != 4)
        {
            if (rem != 7)
                iflag = false;
        }
    }
    return iflag;
}

int main()
{
    int firstNum, secondNumber, flag=false, ch=true;
    cin >> firstNum >> secondNumber;
    int mx = max(firstNum, secondNumber);
    int mn = min(firstNum, secondNumber);

    for (int i = mn; i <= mx; i++)
    {
        flag = coutDigits(i);
        if (flag)
        {
            ch = false;
            cout << i << " ";
        }
    }
    if(ch) cout << -1 << endl;
    return 0;
}