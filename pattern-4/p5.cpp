/*
traingle pattern like :
1
2 2
3 3 3 
4 4 4 4
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (1)
    {
        int n,count=0;
        cout <<"How many: ";
        cin>>n;
        for (int i=1 ; i<=n ; i++)
        {
            for (int j=i ; j<=i; )
            {
                cout <<j<<"\t";
                count++;
                if (count==i) 
                {
                    count=0;
                    break;
                }
            }
            cout<<"\n";
        }
    }
}