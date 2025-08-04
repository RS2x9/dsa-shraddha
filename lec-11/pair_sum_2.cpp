// pair sum : method -2 
#include <iostream>
#include <vector>
#include<algorithm>   // to use algorithms like sort()
using namespace std;
int main()
{
    int n;
    cout <<"Number of elements :";
    cin>>n;
    vector<int> arr(n);
    cout <<"Elements: ";
    for (int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    int st=0;
    int en=n-1;
    sort(arr.begin() , arr.end());  // sorts the vector element in ascending ordder
    int tsum;
    cout <<"Target sum: ";
    cin>>tsum;

    // printing the sorted vector 
    for (int num : arr)
    {
        cout <<num <<" ";
    }
    while (st<en)
    {
        
        int csum= arr[st]+ arr[en] ;
        if ( csum == tsum ) 
        {
            cout <<"\n" << "index: " << st << "," << en << endl;
            break;
        }
        else if (csum<tsum) st=st+1;
        else if (csum>tsum) en=en-1;
    }

    if (st>=en) cout <<"\n" <<"not found";

}