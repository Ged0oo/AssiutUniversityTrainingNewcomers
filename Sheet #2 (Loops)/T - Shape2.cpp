#include <iostream>
using namespace std;

int main()
{
    int lines;
    cin >> lines;
    int space = lines - 1, asterisk = 1, currentAsterisk = 0;
    for (int i = 0 ; i < lines ; i++)
    {
        for (int w = 0 ; w < space ; w++) cout << " ";
        for (int x = 0 ; x < asterisk ; x++) cout << "*";
        cout << endl;
        asterisk += 2;
        space--;
    }
}