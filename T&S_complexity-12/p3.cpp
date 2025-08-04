// prime number:
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout <<"Number:";
    cin>> n;
    int count=0;
    if (n==0 || n==1 ) cout <<n;
    for (int i=2 ; i<= (int)(sqrt(n)) ; i++ )
    {
        if (n%i==0) 
        {
            cout <<"Not prime";
            count++;
            break;
        }
    }
    if (count==0) cout <<"Prime";
}

/*
--> here for any value of n , the loop has to run to (n)^0.5 .
--> time complexity : O(n^0.5) 
*/