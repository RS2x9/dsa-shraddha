/*
reverse traingle :
1
2 1
3 2 1
when n=3 
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
        for (int j=i ; j>=1 ; j--)
        {
            cout<<j<<" ";
        }
        cout <<"\n";
    }
}