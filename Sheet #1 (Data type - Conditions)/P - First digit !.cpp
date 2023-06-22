#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    cin >> a;
    ((a /= 1000) % 2) ? (cout << "ODD") : (cout << "EVEN");
    return 0;
}