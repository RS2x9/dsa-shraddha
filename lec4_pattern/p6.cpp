/*
right trainglr pattern like :
1 
1 2
1 2 3
when n=3
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout <<"How many:";
    cin>>n;
    for (int i=1 ; i<=n ; i++)
    {
        for (int j=1 ; j<=i ; j++)
        {
            cout <<j<<" ";
        }
        cout <<"\n";
    }
}