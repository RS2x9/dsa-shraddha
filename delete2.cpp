#include<iostream>
#include<string>
using namespace std;
bool check(string &s , int &n)
{
    bool flag = true ;  // all are 0 assume 
    for ( int i=0 ; i<n ;i++)
    {
        if ( s[i]==1) 
        {
            flag = false;
            break;
        }
    } 
    return flag; 
}
int main()
{
    int t;
    cin>>t ;
    while( t--)
    {
        int n ;
        cin>> n;
        string s;
        cin>>s ;
        int x=0;
        bool flag = false;
        int i , j;
        for ( i=0 ; i<n ;i++)
        {
            if ( check(s,n) )     // all are 0
            {
                flag = true;
                cout<<x;
                //2nd output
                break;
            }
            else    // flip the digits 
            {
                for ( j=0 ; j<n ; j++)
                {
                    if ( i!=j)
                    {
                        if ( s[j]==0) s[j]=1;
                        else s[j]=0;
                    }
                }
                if ( check( s, n))
                {
                    flag = true;
                    cout<<x;
                    // 2nd output
                    break;
                }
            }
            
        }
        if ( flag == false) cout<<-1;
    }
    return 0;
}