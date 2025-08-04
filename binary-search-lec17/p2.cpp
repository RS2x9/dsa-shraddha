// binary search using recursion

#include<iostream>
#include<vector>
using namespace std;

int search (vector<int> arr , int &start , int &end , int &target)
{
    while (start <= end )
    {
        int mid =start + (end-start)/2;
        if (arr[mid] == target) return mid ;
        else if (arr[mid] > target) return search( arr , start , --end , target);
        else if (arr[mid] < target) return search (arr , ++start , end , target);
    }

    if (start > end ) return -1; // denotes no element is found 
}
int main()
{
    int n;
    cout <<"Number of elements : ";
    cin>>n;
    vector <int> arr(n);
    cout <<"Elements : ";
    for (int i=0 ; i<n ; i++)
    {
        cin>> arr[i];
    }
    int st=0 ; // starting index 
    int end=n-1 ; // ending index
    int target;
    cout <<"Target: ";
    cin>> target;
    cout <<search(arr , st , end , target) << endl;
    return 0;
}