// heirarchial inheritance 
#include<iostream>
#include<string>
using namespace std ;

class person
{
    public:
        string name ;
};

class depart : public person
{
    public:
        string dept;
};

class more : public person
{
    public:
        int age ;
};
int main()
{
    more rishi;
    rishi.name = "rishi";
    rishi.age = 21;
    
    depart rishu;
    rishu.name = "rishu";
    rishu.dept = "robotics";
    
    cout << "Name: "<< rishi.name <<endl;
    cout <<"Age: " << rishi.age <<endl;
    cout <<"Name: " <<rishu.name <<endl;
    cout << "Dept: " << rishu.dept ;
    return 0;
}