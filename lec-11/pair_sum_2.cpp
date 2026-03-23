// pair sum : method -2
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
    int n ;
    cout<<"Enter number of elements: ";
    cin>> n;
    vector<int> arr(n);
    cout<<"Values: \n";
    for ( int i=0; i<n ; i++)
    {
        cout << "Enter "<< i+1 <<" st value: ";
        cin>> arr[i];
    }
    int tar;
    cout<<"Enter target: ";
    cin>>tar;

    // sorting 
    sort(arr.begin() , arr.end());
    int st=0;       // starting index
    int en =n-1;        // ending index 
    int tsum=0;     // store sum of pais
    bool flag = false;      // to check target is found or not
    while (st<en)           // conditiona to avoid glitches and over output
    {
        int tsum = arr[st]+ arr[en] ;
        if ( tsum == tar) 
        {
            cout<< "Index: "<<st<<"," << en << " and values : " << arr[st]<<", "<<arr[en] <<endl;
            flag = true;

            // Increment/Decrement: to traverse in the array
            st++;
            en--;
        }
        else if ( tsum > tar) 
        {
            en--;
        }
        else if ( tsum<tar) 
        {
            st++;
        }
        
        
    }
    if ( flag == false ) cout<<"\nTarget not found";
}