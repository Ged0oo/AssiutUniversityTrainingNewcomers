#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main() 
{
    int n;
    cin  >> n;
    if((n == 0) | (n == 1)) cout << -1 << endl;
    for (int i = 2; i <= n; i+=2) cout << i << endl;
    return 0;
}