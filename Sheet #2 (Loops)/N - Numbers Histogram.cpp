#include <iostream>
using namespace std;

int main()
{
    int count, current;
    char  ch;
    cin >> ch >> count;
    for(int j=1 ; j<= count ; j++)
    {  
        cin >> current;
        for (int i = 0; i < current; i++) cout << ch;
        cout << endl;    
    }
    return 0;
}