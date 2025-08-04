// decimal to binary
// jaise code likha hai , write the flow of it in rough
#include <bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int i=0,sum=0,n;
    cout <<"Enter number:";
    cin>>n;
    int a;
    if (n==0) cout <<sum<<endl;
    while (n!=0)
    {
        a=n%2;
        sum=sum+(a*(int)pow(10,i));
        i=i+1;
        n=n/2;
    }
    cout <<sum<<endl;
}