// count of digits using function
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter: ";
    cin>> n;
    cout <<(int)( log10(n)+1 ) ;
}