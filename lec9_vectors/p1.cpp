/*
vectors : these are array kind of data structures
--> dynamic in nature i,e size is variable 
-->STL(standard template library): code for implementation of data structures are written in STL
--> STL containers : vectors , queue , stack ,  set , etc
*/

/*
vector syntax:
-->  vector <int> vec;  // size=0
-->  vector <int> vec={1,2,3};
-->  vector <int> vec( <size> , < value > );  so all the elements will be of the same value 
*/

/*
--> in STL containers we use : iterators .
--> iterator : here it's not the index , it is the value at the index .
--> whenever iterator is called it should be of type of that vector for which it is used 
*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> arr1;  // size is 0;
    // cout << arr1[0];  this will error : segmentation fault , because there no element in arr1
    vector <int> arr2={1,2,3};
    cout <<arr2[0]<<" "<<arr2[1]<<" "<<arr2[2]<<endl;

    vector <int> arr3(3,5);  // size is 3 and all the values stored are 5
    cout <<arr3[0]<<" "<<arr3[1]<<" "<<arr3[2]<<endl;

    vector <int> arr4(10,6) ; // size is 10 and each value is 5
    for (int num : arr4)  // num  is iterator in STL , it's not index 
    {
        cout <<num <<" ";  
    }
    cout <<endl;
    
    // the above type of for loops are called as for each loop
    
    vector <char> arr5={'a','b'};
    for (char val : arr5) cout <<val <<" ";
}