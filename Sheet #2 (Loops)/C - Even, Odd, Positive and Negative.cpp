#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main() 
{
    int n, m;
    cin  >> n;
    int evens = 0, odds = 0, pos = 0, neg = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> m;

        if (m > 0) pos++;
        else if (m < 0) neg++;

        if (m % 2) odds++;
        else evens++;
    }
    cout << "Even: " << evens << endl;
    cout << "Odd: " << odds << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
    return 0;
}