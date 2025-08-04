/*
        Compute pow(x,n)  using Binary Exponentiation
        
        --> without using this method , TC = O(n)
        --> x : base , n : power
        --> we take the binary form of power
        --> for a decimal number , the maximum number of 0, 1 in it's biary 
        form is : ( logn with base 2)+1 .
        --> we will run our loop this number of times to calculate pow(x,n)
        --> TC is : O(logn with base 2)
        --> now we assign powers to x, starting from left of binary form ,
            start giving powers from to the total number 0, 1 we have got  to x 
        --> now muliply only those numbers when we have got 1 , ignore 0 wala 3 ka powers .
        --> and we won't calculate even power using normal method , we will square that 
            number each time 
        --> 
*/
#include<iostream>
using namespace std;

int main()
{
   // x is base , n is power 
    int n;   
    double x;
    cout << "Enter base power: ";
    cin>> x >> n;

    long bform =n;
    if (n<0)
    {
        x=1/x;
        bform =-bform;
    }
    double ans=1 ;   // stores final value of answer

    while (bform!=0)
    {
        int rem=bform%2;
        if (rem==1)
        {
            ans=ans*x ;  // for the first time , it's pow(x,1)
            
        }
        x=x*x;  // squaring the numbers without using loop

        bform=bform/2;
    }

    cout <<"pow(base , exponent) = "<<ans;
    
    
}

// leetcode - problem -50