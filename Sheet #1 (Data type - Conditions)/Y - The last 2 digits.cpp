#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    unsigned long long int result = (unsigned long long int)((a % 100) * (b % 100) % 100 * (c % 100) % 100 * (d % 100));
    int x = result % 10;
    result /= 10;
    int y = result % 10;
    cout << y<<x;
    return 0;
}