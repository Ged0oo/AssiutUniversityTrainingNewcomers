#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

long long int getFact(int n)
{
    if (n == 0) return 1;
    else return (n * getFact(n - 1) );
}

int main() 
{
    int n,m;
    cin >> n;
    for (int i=0;i<n;i++) {cin>>m;cout<<getFact(m)<<endl;}
    return 0;
}