/*
right angled star pattern

* 
* *
* * *
like this 
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (1)
    {
        int n;
        cout <<"How many rows you want? ";
        cin>>n;
        for (int i=1 ; i<=n ; i++)
        {
            for (int j=1 ; j<=i ; j++)
            {
                cout <<"*"<<"\t";
            }
            cout <<"\n";
        }
    }
}