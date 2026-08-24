// decimal to binary
#include <iostream>
#include<vector>
#include<algorithm>.  // to use algorithms like reverse 
using namespace std;
int main()
{
    int n;
    cout<<"E: ";
    cin>>n;
    vector<int> arr;
    while(true)
    {
        if(n==1) // after repeated divions when n becomes 1
        {
            arr.push_back(1);  // appends 1 at the end of dynamic array
            break;
        }
        else
        {
            arr.push_back(n%2);  // appends at the end of dynamic array
            n=n/2;
        }
    }
    
    // reverse
    reverse(arr.begin(), arr.end());
    for (int i=0 ; i< arr.size() ; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
