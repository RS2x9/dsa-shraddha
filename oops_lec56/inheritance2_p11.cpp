/*
    when contructor is parametrised 
    --> called before the default constructor 
*/

#include<iostream>
#include<string>
using namespace std;
class person 
{
    public: 
    string name ;
    int age ;

    person (string name , int age )        // parametrised constructor 
    {
        this -> name = name ;
        this -> age = age ;
    }
};

class student : public person
{
    public:
    int roll;

    // below : from child constructor , parent class constructor is called explicitly
    student(string name , int age , int roll ) : person( name , age )   // before student default constructor calls , contructor from base class is called 
    {
        cout << "child constructor: " << endl;
        this-> roll = roll;
    }

    void getinfo()
    {
        cout << "name : " << name <<endl;
        cout << "age : " << age << endl;
        cout <<"roll: " << roll << endl;
    }
};

int main()
{
    student s1 ("rishi", 20 , 91);
    s1.getinfo();
}