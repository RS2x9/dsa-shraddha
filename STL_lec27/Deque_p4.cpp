/*
    Deque: Double Ended Queue 
    --> similar to list , all functuons existing list exsit here 
    --> two types : deque , dequeue 
    --> dequeue : popping any element from que

    --> in list : random access to elements is not possible 
        in deque : implemented using dynamic arrays , random access to elements is possible 
*/

#include<iostream>
#include<deque>
using namespace std;
int main()
{
    // declaring deque
    deque<int> d;
    d.push_back(1);
    d.push_back(1);
    d.push_back(1);
    cout << " d: ";
    for (int num : d)
    {
        cout << num << " ";
    }

    // initialising deque 
    deque<int> d2 ={ 10,20,30};
    cout << " \n d2: ";
    for (int num : d2)
    {
        cout << num << " ";
    }

    cout << "\n d[1]: " << d[1];    // not possible in list


}