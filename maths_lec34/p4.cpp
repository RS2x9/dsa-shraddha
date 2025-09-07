// armstrong number
#include<iostream>
#include<cmath>
using namespace std;

bool arms(int x)
{
    int temp=x;
    if ( x==0 ) return true;
    int digits=(int)(log10(x) +1);
    int sum=0;
    while (x!=0)
    {
        int digit = x%10 ;
        sum = sum+ (int)( pow(digit, digits) ) ;
        x=x/10;
    }
    return sum==temp;
}
int main()
{
    int n;
    cout <<"Enter: ";
    cin>> n;
    if(arms(n)) cout << " is armstrong " ;
    else cout << "not";
}