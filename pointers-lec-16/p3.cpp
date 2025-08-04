// example 
#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int *p=&a;
    int **q=&p;

    cout<<"value of a: "<<*p<<endl;
    cout <<"Value at a: "<<**q<<endl;
    cout <<"Address of a: "<<p<<endl;
    cout <<"Address of a: "<<*q;
}