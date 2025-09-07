/*
    types of inheritance:
    1) Single inheritance : from one parent , properties are inherited to one child 
    2) Multi Level Inheritance : inheritance is conducting between multile parents and child 
    3) Multiple inheritance : one child class inherits the properties of two parent class 
    4) Hierrachial inheritance : one parent inherits to multiple child 
    5) Hybrid Inheritance : anything is going on , it's mix of all above .
*/

// example : Multi Level Inheritance 
#include<iostream>
#include<string> 
using namespace std;

class person
{
    public:
    string name ;
    int age ;
};

class student : public person
{
    public:
    int roll;
};

class grad: public student          // all the properties there in student + person comes here 
{
    public:
    string research;
};

int main()
{
    grad s1;
    s1.name ="rishi";
    s1.age = 20;
    s1.roll =91 ;
    s1.research ="drone";

    cout << " name : " << s1.name << endl;
    cout << " age : " <<s1.age << endl;
    cout << " roll: " << s1.roll << endl;
    cout << " research : " << s1.research << endl;
}