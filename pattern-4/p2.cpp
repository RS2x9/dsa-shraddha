// sqaure pattern for characters 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (1)
    {
        char ch='a';
        int n;
        cout <<"How many characters you want:";
        cin>>n;
        for (int i=1 ; i<=n ; i++)
        {
            for (int j=1 ; j<=n ; j++)
            {
                cout <<ch++;
            }
            ch='a';
            cout<<"\n";
        }
    }
}