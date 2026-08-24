// hollow diamond 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout <<"E:";
    cin>>n;
    // upper half 
    for (int i=1 ; i<=n ; i++)      // creates n rows 
    {
        // upper half 
        // spaces 
        for (int j=n-i ; j>=1 ; j--)
        {
            cout <<" "<<" ";    // the second space is added beacuse there is space between two stars 
        }

        // star
        cout <<"*";
        if (i>=2)  // spaces and the right star pattern 
        {
           for (int j=1 ; j<2*i-1 ; j++)
           {
            cout <<" "<<" ";    // the second space is added beacuse there is space between two stars
           }
           cout <<"*";
        }
        cout <<"\n";


    }

    // lower half 
    for (int i=n-1 ; i>=1 ; i--)  // to create n-1 rows
    {
        // left traingular space 
        for (int j=n-i ; j>=1 ; j--)
        {
            cout <<" "<<" ";    // the second space is added beacuse there is space between two stars
        }

        // star
        cout <<"*";
        // then spaces between stars 
        if (i>=2)  // spaces and the right star pattern 
        {
           for (int j=1 ; j<2*i-1 ; j++)
           {
            cout <<" "<<" ";    // the second space is added beacuse there is space between two stars
           }
           // right star
           cout <<"*";
        }
        cout <<"\n";
    }
}