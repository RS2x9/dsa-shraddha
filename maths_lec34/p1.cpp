/*
    Prime number
*/

#include<iostream>
#include<cmath>
using namespace std;

bool prime(int n)
{
    if ( n==0 || n==1 ) return false ;
    if ( n>=2 )
    {
        for (int i=2 ; i<= (int)(sqrt(n)) ; i++)
        {
            if ( n%i ==0) return false;
        }
    }
    return true ;
}
int main()
{
    int n ;
    cout <<"Enter : ";
    cin>>n;
    if ( prime(n) ==1 ) cout << "prime "<<endl;
    else cout << "not prime ";
}