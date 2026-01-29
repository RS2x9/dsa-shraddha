// decimal to binary
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"E: ";
    cin>>n;
    int num=n;
    vector<int> arr;
    while(true)
    {
        if(n==1)
        {
            arr.push_back(1);
            break;
        }
        else
        {
            arr.push_back(n%2);
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
