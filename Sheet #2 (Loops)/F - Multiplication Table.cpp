#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    for (int i = 1; i < 13; i++)
    {
        cout << n << " * " << i << " = " << n * i <<endl;
    }
    return 0;
}