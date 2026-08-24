// example : multiple inheritance 

#include<iostream>
#include<string>
using namespace std;

class student       // parent class
{
    public:
    string name ;
};

class teacher       // parent class
{
    public:
    string subject;
    int salary;
};

class ta : public student , public teacher
{
    public: 
    void getinfo()
    {
        cout << " I am child " << endl;
    }
};

int main()
{
    ta t1;
    t1.name = "rishi";
    t1.subject = "B.tech" ;
    t1.salary =  233434;

    t1.getinfo();
    cout << " name: " << t1.name  << endl ;
    cout << " subject : " << t1.subject << endl;
    cout << " salary : " << t1.salary << endl;
}