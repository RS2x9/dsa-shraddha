/*
inverse traingle :
when n=4:
1 1 1 1
  2 2 2
    3 3
      4
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout <<"E:";
    cin>>n;
    for (int i=0 ; i<n ; i++)  // for number of rows
    {
        // for spaces 
        if (i>=1)
        {
            for (int k=i-1 ; k>=0  ; k--)
            {
                cout <<" "<<" "; // first spaces will get printed 
            }
        }   

        for (int j=n-i ; j>=1 ; j--) // for the number of columns
        {
            cout<<i +1<<" ";
        }
        cout <<"\n";
    }
}