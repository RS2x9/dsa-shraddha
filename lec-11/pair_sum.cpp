// Pair sum: return pair in sorted array with target sum

// below is Brute Force Approach
// time complexity : O(n^2)
// my logic
// this code gives all the possible combinations 
#include <iostream>
using namespace std;
int main()
{
    int csum=0; // current sum
    int count=0;
    int n;
    cout <<"Number of elements : ";
    cin>>n;
    int arr[n];
    cout <<"Elements :";
    for (int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    int tsum; // target sum
    cout <<"Target sum: ";
    cin>>tsum;
    for (int st=0 ; st<n ; st++)
    {
        if (arr[st] == tsum)  // checks for standalone element
        {
            cout <<"\n" <<arr[st]<<" at index: "<<st <<endl;
            break;
        }

        for (int en=st+1 ; en<n-1 ; en++)  // checks for pair
        {
            csum=arr[st]+arr[en];
            if (csum==tsum)   // the pairs are found
            {
                cout <<"\n " << arr[st]<<" "<<arr[en]<<" at index: "<<st<<","<<en<<endl;
                break;
            }

            else 
            {
                csum=arr[st];  // starting refernce was this only 
            }

        }
    }
}