/*
    Array Pointer:
    --> the array is a pointer pointing to the first element of array
    --> in memory the address stored will be arr[0] i,e addessof first element of array
    --> generally pointers value can be changed but array are constant pointers i,e unchangable 
        because is arrray won't be constant then their values will get lost when changed.
    --> 
*/

#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    cout <<"Address of first element of array: "<<arr<<endl;
    cout <<"arr[0]: "<< *arr<<endl;

    cout <<"Address of second element of array: "<< arr+1 <<endl;
    cout <<"arr[1]: "<< *(arr+1) <<endl;
}