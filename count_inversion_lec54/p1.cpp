/*
    count inversion :
    --> count the total number of inversions :
    --> condition : 
        --> i<j
        --> arr[i] > arr[j]  ; j starts from i+1 and goes to arr.size()
*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = { 6,3,5,2,7 };
    int count =0;
    for ( int i=0 ; i<arr.size()-1 ; i++)
    {
        for (int j=i+1 ; j<arr.size() ;  j++)
        {
            if ( arr[i] > arr[j] ) count ++;
        }
    }

    cout << "Number of count inversions : " << count ;
    return 0;
}