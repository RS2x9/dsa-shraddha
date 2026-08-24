/*
    --> taking product of all 
    --> then divide by that element and cout it 
*/

// my logic
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout <<"Number of elelmnts : ";
    cin>>n;
    vector<int > arr(n);
    cout <<"Elements : ";

    long prod=1;
    for (int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
        prod=prod*arr[i];
    }

    for (int num : arr)
    {
        cout <<prod/num<<" ";
    }


}

// method-3 on leetcode : pass by reference 