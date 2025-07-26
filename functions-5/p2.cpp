//calculate sum of digits of a number

#include<bits/stdc++.h>
using namespace std;
void sum()
{
    while (1)
    {
        int n;
        cout <<"\nE:";
        cin>>n;
        int sum=0;
        while (n!=0)
        {
            sum=sum+(n%10);
            n=n/10;
        }
        cout <<sum;
    }
}
int main()
{
    sum();
}