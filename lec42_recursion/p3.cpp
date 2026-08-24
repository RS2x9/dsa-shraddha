// sum of n numbers 
// TC=O(n)  , ignoring constants 
// SC =O(n)  , "
#include<iostream>
using namespace std;

int print(int num)
{
    if (num!=0) return num+print(num-1);
}
int main()
{
    int n;
    cout <<"Enter n: ";
    cin>>n;
    cout << print(n);
    return 0;
}