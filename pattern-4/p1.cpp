// square pattern 
#include<bits/stdc++.h> 
using namespace std;
int main()
{
    while (1)
    {
        int n;
        cout <<"En:";
        cin>>n;
        for (int i=0 ; i<n ; i++)       // this for is for developing n rows 
        {
            for (int j=1 ; j<=n ; j++)
            {
                cout <<j<<" ";      // for coloumns 
            }
            cout <<"\n";
        }
    }
}