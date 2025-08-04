// check if an array is sorted  
#include<iostream> 
#include<vector>
using namespace std;

bool check (vector<int> arr , int n)
{
    if (n==1) return true;  // at this point n-2 is invalid because all the checking has been done 
    return ( arr[n-1] >= arr[n-2] ) && check( arr , n-1 );  // function is called later because we need to compare the elements first
}

int main()
{
    int n;
    cout <<"Number of elements :";
    cin>> n;
    vector<int> arr(n);
    cout <<"Elements :";
    for (int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    if (check (arr,n)==0) cout <<"Not sorted ";
    else cout << "Sorted";
}

// time complexity = n*O(1)  = O(n)
// space complexity= O(n)