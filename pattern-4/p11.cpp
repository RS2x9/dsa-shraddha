/*
pyramid problem: when n=3
    1
  1 2 1
1 2 3 2 1
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout <<"E:";
    cin>>n;
    for (int i=1 ; i<=n ; i++)
    {
        // spaces 
        for (int j=n-i; j>=1 ; j--)
        {
            cout <<" "<<" ";
        }

        // left half 
        for (int j=1 ; j<=i ; j++)
        {
            cout <<j<<" ";
        }

        // right half 
        for (int j=i-1 ; j>=1 ; j--)
        {
            cout <<j<<" ";
        }

        cout <<"\n";
    }
}