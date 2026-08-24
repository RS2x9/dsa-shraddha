// gcd : greatest common divisor 
#include<iostream>
using namespace std;

int gcd( int &divisor , int &divident)
{
    if ( divisor ==0 || divisor==1 ) return divisor;
    while (divisor!=0)
    {
        int rem=divident%divisor;
        if ( rem==0)
        {
            return divisor;
        }

        divident=divisor;
        divisor=rem;
    }
}
int main()
{
    int divisor , divident;
    cout << "Divisor , divident : ";
    cin>> divisor >> divident ;
    cout << gcd( divisor , divident);

}