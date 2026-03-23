#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std ;
int main()
{
    int t;
    cin>>t ;
    while (t--)
    {
        
        bool flag = false ;
        int n ;
        cin>> n;
        vector<vector<int>> mat[n][n];
        for ( int i=0 ; i< n ;i++)
        {
            for (int j=0 ; j<n ; j++)
            {
                cin >> mat[i][j];
            }
        }
        
        map<int, int> m;
        for ( int i=0 ; i< n ; i++)
        {
            for ( int j=0 ; j<n ; j++)
            {
                m[mat[i][j]]++;
            }
        }
        int x = n*(n-1);
        for ( int i=0 ; i<n ; i++)
        {
            for ( int j=0 ; j<n ; j++)
            {
                if ( m[mat[i][j]] > x) 
                {
                    cout<<"no";
                    flag = true ;
                    break;
                }
            }
        }
        if ( flag == false ) cout << "yes";
        
    }
    return 0;
    
}