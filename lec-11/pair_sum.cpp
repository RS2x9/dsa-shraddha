// Pair sum: return pair in sorted array with target sum

// below is Brute Force Approach
// time complexity : O(n^2)
// my logic
// this code gives all the possible combinations 
#include<iostream>
using namespace std;
#include<vector>
int main()
{
    int n ;
    cout<<"Enter number of elements : ";
    cin>> n;
    vector<int> arr(n);
    cout<<"Values: ";
    for (int i=0 ; i<n ; i++ )
    {
        cout<<"Enter "<<i+1<<" value: ";
        cin>>arr[i];
    }
    cout<<"\n enter target sum: ";
    int tar;
    cin>>tar;
    bool flag = false;      // to check target can be found or not 
    for ( int st=0;st<n ; st++)
    {
        int tsum = arr[st];
        if ( tsum== tar)
        {
            st++;       // single elemnts are not counted in pair sum problem
        }
        for (int en =st+1 ; en<n-1 ; en++)
        {
            tsum += arr[en];
            if ( tsum== tar)
            {
                cout<< "\nPair at index: "<<st<<","<<en<<" and values are : "<<arr[st]<<","<<arr[en];
                if (flag == false ) flag =true;     // means target found
            }
            else tsum= arr[st];     // removing the second added element
        }
    }
    if ( flag == false) cout << "\nTarget not found"<< endl;
    return 0; 
   
}