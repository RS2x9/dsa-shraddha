/*
    Modes of inheritance :
    -->         |    child     |        child       |     child 
    ---------------------------------------------------------------
        parent   |  private    |      protected     |    public
        ----------------------------------------------------------
        private  |  not inherit |   not inherit     |  not inherit
        -----------------------------------------------------------
        protectd  | private     | protected         | protected 
        -----------------------------------------------------------
        public    | private     |   protected       |   public

    --> protected mode : private proprty which is inherited to other derieved classes but 
        not giving that property outside class  
*/

#include<iostream>
#include<string>
using namespace std;

class person
{
    public:
    string name ;
    string age;
    person( string name , int age )    // parametrised constructor 
    {
        this -> name = name ;
        this -> age =age ;
    }
};

class student : private  person     // the properties called from person class will become private here 
{
    public:
    int roll;
    student ( string name , int age , int roll) :  person (name , age )
    {
        this -> roll = roll ;
    }

    void getinfo()
    {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "roll : " << roll <<endl;
    }
};

int main()
{
    student s1("rishi", 20 ,91);
    s1.getinfo();    // because of below line , this is not getting printed 
    cout << s1.name ;       // won't get printed : it's contrained by private inheritance 

}