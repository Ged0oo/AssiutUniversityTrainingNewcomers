#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;


int main() 
{
    int num, reverse = 0, remainder, Palindrome;
    cin >> num;
    Palindrome = num;
    for (int i = 0 ; i < 100 ; i++)
    {
        if (!num) break;
        remainder = num % 10;
        reverse = (reverse * 10) + remainder;
        num /= 10;
    }
    if (Palindrome == reverse) {
        cout << reverse << endl; cout << "YES";
    }
    else { 
        cout << reverse << endl; 
        cout << "NO" << endl; 
    }
    return 0;
}