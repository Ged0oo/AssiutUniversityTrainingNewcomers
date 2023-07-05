#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;


int main()
{
    int firstNum, secondNumber, GCD;
    cin >> firstNum >> secondNumber;
    firstNum = (firstNum > 0) ? (firstNum) : (-firstNum);
    secondNumber = (secondNumber > 0) ? (secondNumber) : (-secondNumber);
    for (int i = 1; (i <= firstNum) && (i <= secondNumber); i++)
    {
        if (((firstNum % i == 0) && (secondNumber % i == 0)))
        {
            GCD = i;
        }
    }
    cout << GCD;
    return 0;
}