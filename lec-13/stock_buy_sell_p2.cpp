// stock buy and sell
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    // we can't sort because the price of the stock depends on the ith day  
        /*
            --> find the minimum in the array
            --> then the difference( individual prices - minimum) for profit should not be -ve 
            --> if difference is negative then profit should be 0
        */

    int n;
    cout <<" Number of elements : ";
    cin>>n;
    int prices[n];
    cout <<"Elements : ";
    for (int i=0;  i<n ; i++)
    {
        cin>>prices[i];
    }

    int mini=INT_MAX;  // will store the minimum in the array 
    int profit =0 ; // initially profit is assumed to be 0 

    for (int price : prices)
    {
        mini=min( mini , price );   // always track for the minimum element 
        profit = max(profit , price-mini);   // always track whether profit is going up or not and stores the max 
    }

    cout <<"Profit : "<<profit ;

    
}