// binary to decimal 
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int a,n,sum=0,i=0;
    cout <<"Enter:";
    cin>>n;
    if (n==0) cout <<sum<<endl;
    while (n!=0)
    {
        a=n%10;  // to get the last digit 
        sum=sum+a*(int)pow(2,i);
        i+=1;
        n=n/10;
    }
    cout <<sum<<endl;
}