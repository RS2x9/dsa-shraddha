/*
square pattern like: 
if n=3 then :
output is :
1 2 3
4 5 6 
7 8 9

*/

#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    while (1)
    {
        int n;
        cout <<"\n E: ";
        cin>>n;
        int count =0;
        for (int i=1 ; i<=(int)pow(n,2) ; i++)
        {
            cout <<i<<"\t";;
            count++;
            if (count %n==0) cout<<"\n";
        }
    }
}