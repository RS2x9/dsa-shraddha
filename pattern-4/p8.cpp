/*
Floyd's Traingle 
1
2 3
4 5 6 
7 8 9 10
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num=1 ;     
    for (int i=1; i<=4 ; i++)   // decides number of rows 
    {
        for (int j=1 ; j<=i ; j++)      // decides number of columns 
        {
            cout <<num<<" ";
            num++;
        }
        cout <<"\n";
    }
}