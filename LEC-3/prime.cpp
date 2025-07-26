#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout <<"Eneter:";
    cin>>n;
    if (n==0 || n==1 ) cout <<n<<endl;
    else 
    {
        for (int i=2 ; i<=(int)sqrt(n) ; i++)
        {
            if (n%i==0) cout <<"Not prime"<<endl;
            else cout <<"prime"<<endl;
        }
    }
}