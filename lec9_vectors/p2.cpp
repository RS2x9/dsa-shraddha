/*
        vector functions :
*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // 1) <vector name>.size() :
    vector <int> vec1;
    cout <<vec1.size()<<endl;

    // 2) <vector name>.push_back( , value > )  : it adds the element at the end
    vec1.push_back(1);
    cout<<vec1.size()<<endl;

    vec1.push_back(2);
    cout <<vec1.size()<<endl;
    for (int num : vec1) cout <<num<<" ";
    cout <<endl;


    // 3) < vector name >.pop_back() ; automatically removes the last element from the vector 
    vec1.pop_back();
    for (int num : vec1) cout <<num<<endl;

    // 4) < vector name >.front() : printing the starting value of vector 
    cout <<"front value is : "<<vec1.front()<<endl;

    // 5) < vector name >.back()  : prints the last value of the vector 
    cout <<"value at end of vector :"<<vec1.back()<<endl;

    // 6) < vector name >.at(< index > )  : to access a value at a particular index
    cout <<"using at: "<<vec1.at(0);
}