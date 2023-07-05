#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main() 
{
    int n, max = 0, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (m >= max) max = m;
    }
    cout << max;
    return 0;
}