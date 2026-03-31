/*
    Base class constructor → Child class constructor
*/

#include<iostream>
#include<string>
using namespace std;
class person        // parent class 
{
    public: 
    string name ;
    int age ;

    person (string name , int age )        // parametrised constructor 
    {
        this -> name = name ;
        this -> age = age ;
    }

    void get_info()
    {
        cout<< "I am the father:-"<< endl;
        cout <<"name: " << name << endl;
        cout <<"age: "<< age << endl;
    }
};

class student : public person               // child class
{
    public:
    int roll;

    // below : from child constructor , parent class constructor is called explicitly
    student(string name , int age , int roll ) : person( name , age )   // before student default constructor calls , contructor from base class is called 
    {
        cout << "child constructor: " << endl;
        this-> roll = roll;
    }

    void get()
    {
        cout << "name : " << name <<endl;
        cout << "age : " << age << endl;
        cout <<"roll: " << roll << endl;
    }
};

int main()
{
    student s1 ("rishi", 20 , 91);
    s1.get();
    s1.get_info();
}



/*
    --> Base Class Constructor Runs FIRST
        This line forces:  person(name, age)
        then Child Constructor Runs
        Now s1 is fully initialized.
*/

/*
    --> s1.get_info();
    --> here person class is not called and still   it's not giving error 
    --> stu inherits everything public from person
        So inside stu, you already have:
        name
        age
        get_info()
*/