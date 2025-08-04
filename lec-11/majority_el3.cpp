// important algo
// moore's voting  algorithm:
/*
--> Start tracking frequency of all the elements , the mojority element is having the highrst frequency
--> no sorting required 
--> start with the starting element and if the next elelemnt is same then increase the frquency else decrease it 
--> we won't reset the element because that elelemnt can occur elsewhere in the array
--> it is assumed that the frequency of majority element > n/2
*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout <<"Number of elements : ";
    cin>>n;
    vector <int> arr(n);
    cout <<"Elements : ";
    for (int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    int freq=0;
    int ans=0;
    for (int i=0 ; i<n ; i++)
    {
        if(freq==0) ans=arr[i];
        else if (ans==arr[i]) freq++;
        else freq--;
    }
    cout <<"\n"<<ans;
}