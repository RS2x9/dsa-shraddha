/*
    total number of subsets for a array containing n elements is 2^n
    --> the last subset contains nothing 
*/


// this is not clear

#include<iostream>
#include<vector>
using namespace std;

void printSubsets( vector<int> &arr , vector<int> &ans , int i)  // we don't have to create copy so we are passing the value by reference 
{
    if ( i==arr.size())  //  i,e there is no element to add
    {
        for (int val : ans)
        {
            cout << val << " ";
        }
        cout << endl;
        return ;
    }

    // include the values to ans 
    ans.push_back( arr[i] );
    printSubsets( arr , ans , i+1  );

    /*
        in backtracking : we will remove the last element added 
    */

    ans.pop_back();   // backtracking
    printSubsets( arr , ans , i+1);     // exclude 
}

int main()
{
    vector<int> arr={1,2,3};
    vector<int> ans ;  // store subsets 

    printSubsets(arr , ans , 0);
    return 0;
}