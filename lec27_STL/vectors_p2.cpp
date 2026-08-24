/*
     Vectors :
     --> these are dynamic arrays , size is changeable 
     --> include the library : vector  
     --> syntax:  vector < <datatype > > < vector name > ;
                or vector < <datatype > > < vector name > ( < size> ) ;
                or vector < <datatype> > <vector name> = { <values > }; 
                or see code below 
    
    --> eg: vector<int> arr;
        or vector <int> arr(n);   n can be any natural number 
    --> <array name>.push_back( <value> )  : adds value to array at the end .
    --> < array name>.emplace_back( < data> )  :  adds data at last of array 
    --> < array name>.pop_back()    : removes last element from the array
    --> < array name >.size()  : gives the number of elements in array

    --> < array name >.capacity()  : gives how many elements it can accomodate 
        when the array is full , to add another element , internally the size of the vector gets doubled 
        eg: vector<int> arr;
            size        capacity
            0           0
            now : arr.push_back(10)
            1           1
            again: arr.push_back(20)
            2           2
            again : arr.push_back(30)
            3           4
            now : arr.pop_back()
            2           4

    --> Access the elements of arr by index :
            --> <array name>[ <index > ]
            --> < array name >.at( <index> )
    --> Accesing first element: <array name >.front()
    --> Accesing first element: <array name >.back()
    --> the above elements works in time complexity =O(1)
 

    --> < array name >.erase( < position of element > ) : used to delete an element or range of elements   . 
        time complexity=O(n)
    
    --> < array name >.erase( start position , end position ): deletes the element from start to end-1
    --> erase() , clear() only changes size of array , not capacity 
    --> < array name >.insert( < position> , < value> ) : inserts the value at required position
       time complexity=O(n) 

    --> < array name >.clear()  : deletes all the elements in  array . 
        --> can't change capacity of array
    
    --> < array name >.empty() : 
            --> chwcks whether array is empty
            --> returns boolean value 

    --> 
    
*/

/*
    Vector Iterators :
    --> used in forward  loop 
    --> declaring :
        --> eg:  vector<int> :: iterator itr ;
                --> vector iteratos type is : iterator
                --> int is the datatype of elements in vector 
                --> :: means our iterator is pointing to vector
                --> itr used  is just a normal variable name 
                --> itr is pointing to nowhere now 

    --> < array name>.begin() : 
            --> it's an iterator , points to memory address of the first element
            --> dereferencing it will give the value stored at that memory address
            --> using <array name>.begin() : will give value , indicating this function points to that element memory address

    --> < array name>.end()  : 
            -->  it do not points to memory of last element of array
            --> it points to memory address of nth element of array
            --> so deferencing it will give unpredictable results

    Reverse Vector Iterators :
    --> used in backward loop 
    
    --> declaring :
        --> vector<int> :: reverse_iterator itr ;

    --> < array name>.rbegin() : points to the address of last element of the vector 
    --> < array name >.rend() : 
        --> do not points to the address of first element of the vector
        --> points to the address before the address of first element
*/

#include<iostream>
#include<vector> 
using namespace std;

int main()
{
    // vector declaration
    vector<int> arr;    // size is zero 
    cout << " Size of arr: " << arr.size() <<endl;

    // adding element to arr
    arr.push_back(10);      // this function adds element at the last of arr
    cout << " Size of arr: " << arr.size() << " and" << " value : "<<arr[0]<< endl;
    cout <<" Size of arr: "<< arr.size() << " capacity of arr: "<< arr.capacity() << endl;

    // adding some more elements 
    arr.push_back(20);
    cout <<" Size of arr: "<< arr.size() << " capacity of arr: "<< arr.capacity() << endl;
    arr.push_back(30);

    // printing elements of arr
    cout << " Elements of arr: " ;
    for (int num : arr)     // num is iterator , not index  . it's the value which is traversing through the arr and printing the values
    {
        cout << num << " ";
    }
    cout <<"\n";
    cout <<" Size of arr: "<< arr.size() << " capacity of arr: "<< arr.capacity() << endl;

    // removing element from the array 
    arr.pop_back();
    cout <<" Size of arr: "<< arr.size() << " capacity of arr: "<< arr.capacity() << endl;

    // using at()
    cout <<" arr[0]: "<< arr.at(0) << endl;

    // adding some elements 
    arr.push_back(40);
    arr.push_back(50);
    cout << " First element: "<< arr.front() << endl;
    cout << " Last element: "<< arr.back() << endl;

    // declaring vectors 
    vector <int> arr2={1,2,3};  // declared without specifying size 
    cout << " arr2: ";
    for (int num : arr2)
    {
        cout << num <<" ";
    }

    cout <<"\n";

    // declaring vectors 
    vector<int> arr3(3,10);   // size =3 , value=10 at every index 
    cout << "arr3: ";
    for (int num : arr3)
    {
        cout <<num << " ";
    }
    cout <<"\n";

    // declaring one vector using another vector 
    vector<int> arr4={10,20,30};
    vector<int> arr5( arr4 );
    cout << " arr5 or arr4 : ";
    for ( int num : arr5)
    {
        cout << num << " ";
    }

    // erase()   
    arr5.erase( arr5.begin() );
    cout << "\n arr5 after using erase: ";
    for (int num : arr5)
    {
        cout << num << " ";
    }

    arr5.push_back(40);
    arr5.push_back(50);
    // arr5[]={ 20 ,30 ,40 ,50}
    arr5.erase( arr5.begin() +2);   // deleting the element at index 2
    cout << "\n arr5 after deleting elements at index 2: ";
    for (int num : arr5)
    {
        cout << num << " ";
    }

    arr5.push_back(60);
    arr5.push_back(70);
    arr5.push_back(80);
    // arr5[]={ 20 , 30 , 50 , 60 , 70 , 80}
    // deleting elements from index 1 to index 4
    arr5.erase( arr5.begin() +1 , arr5.begin() +5 );
    cout <<"\n arr5 after deleting a range of elements : ";
    for (int num : arr5)
    {
        cout << num << " ";
    }

    // insert()
    // arr5[]={20,80}
    arr5.insert( arr5.begin() +1 , 100);    // inserts 100 at index 1
    cout << " \n arr5 after inserting :";
    for (int num : arr5)
    {
        cout << num <<" ";
    }

    // clear()
    arr5.clear();
    cout <<"\n using clear(): ";
    cout << "Size: "<< arr5.size() << " capacity : "<< arr5.capacity();

    // empty()
    cout << "\n is empty: "<< arr5.empty();

    // begin()
    vector<int> arr6={1,2,3,4,5};
    cout << "\n *(arr6.begin() ): " << *(arr6.begin() ) <<endl;

    // end()
    cout << " *( arr6.end() ) : " << *( arr6.end() )<<endl;  //  it's giving 0 , becuase it's not pointing to valid address

    // using vector iterator 
    vector <int> :: iterator itr;
    cout <<" using vector  iterator :" ;
    for (itr =arr6.begin() ; itr!= arr6.end() ; itr++)
    {
        cout << *itr <<" ";
    }

    // reverse vector iterators 
    vector<int> :: reverse_iterator itrs;
    cout << " \nusing reverse vector iterators: ";
    for  ( itrs= arr6.rbegin() ; itrs!=arr6.rend() ; itrs++ )   // prints elements in reverse order  
    {
        cout << *itrs << " ";
    }
    
    // itrs :  You should move forward through the reverse iterator.
    // Reverse iterators are designed so that ++ moves you toward the beginning of the container

    // we can use auto itrs instead of :  vector<int> :: reverse_iterator itrs
    cout << " \nreverse iterator using auto :";
    for (auto it = arr6.rbegin() ; it!= arr6.rend() ; it++ )
    {
        cout << *it << " ";
    }
}