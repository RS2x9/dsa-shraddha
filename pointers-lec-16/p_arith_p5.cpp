/*
    pointer arithmetic :
    --> addition of two pointers is not possible 
    --> subtracting two pointers of same datatype gives : number of blocks of datatype 
*/

#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3};
    cout << *arr << endl;
    cout <<*(arr+2) <<endl; // arr is increased by 2 datatype and because of * , it gives the value stored at that address

    cout<<"\n";
    int a=10;
    int *ptr=&a;
    cout <<ptr<< endl;
    ptr++;  // ptr is pointing 1 dataype + the address stored before this step
    cout <<ptr <<endl;

    // subtracting pointers 
    char c='a';
    char *ptr1=&c;
    char b='b';
    char *ptr2=&b;
    ptr2=ptr2+10;
    cout <<"Pointer diff: " <<ptr2-ptr1 << endl;

    // comparing pointers 
    cout <<  (ptr2>ptr1) << endl;  // ptr2 is greater so it returns 1
}