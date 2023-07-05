#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int getPrime(int n)
{
    int flag = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0) { flag = 0; break; }
    }
    if (flag) return n;
}

int main()
{
    int n, m;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        m = getPrime(i);
        if (m) cout << m << " ";
    }
    return 0;
}