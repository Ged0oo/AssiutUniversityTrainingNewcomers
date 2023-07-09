#include <iostream>
using namespace std;

int main()
{
    int count;
    cin >>count;
    for(int j=count ; j >= 0 ; j--)
    {  
        for (int i = 0 ; i < j; i++) cout << "*";
        cout << endl;    
    }
    return 0;
}