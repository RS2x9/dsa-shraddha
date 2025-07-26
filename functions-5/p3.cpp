//calculate binomial coffiecient
#include<bits/stdc++.h>
using namespace std;
long long fact(int x)  // used: recursion 
{
    if (x==0 || x==1) return 1;
    else if (x>=2)
    {
        return x*fact(x-1);
    }
}

int main()
{
    int n,r;
    cout <<"n   r:";
    cin>>n>>r;
    if (n<r) cout <<"Not defined ";

    else 
    {
        long long  result =fact(n)/(fact(r)*fact(n-r));
        cout <<result;
    }

}