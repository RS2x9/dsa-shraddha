/*
print :
A
B A
C B A
D C B A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch='A';
    for (int i=0 ; i<4 ; i++)       // start i=0 only
    {
        for (char c=ch+i ; c>=ch ; c--)
        {
            cout <<c<<" ";
        }
        cout <<"\n";
    }
}