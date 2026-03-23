// prime number : optimised way 
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    while (true)
    {
        cout <<"\nEnter: ";
        cin>>n;
        if ( n<=1) cout << "\nNot prime";
        else 
        {
            bool flag =true;        // assume number is prime
            for (int i=2 ; i<=(int)sqrt(n) ; i++)
            {
                if (n%i==0) 
                {
                    cout <<"\nNot ";
                    break;
                }
                
            }
            if (flag ==true) cout<<"prime";
            
        }
    }
}