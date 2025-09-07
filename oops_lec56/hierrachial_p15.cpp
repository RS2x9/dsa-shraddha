#include <iostream>
#include<string>
using namespace std;

class person
{
    public:
    string name;
};

class student 
{
    public:
    int roll;
};

class teacher : public person , public student 
{
    public :
    string subject;

    void getinfo()
    {
        cout << "hierrachhial inheritance" <<endl;
    }
};

int main()
{
    teacher t1;
    t1.name = "rishi";
    t1.roll = 91;
    t1.subject = "maths ";

    cout << " name : " << t1.name << endl;
    cout << " roll : " << t1.roll << endl;
    cout << " subjeect : " << t1.subject << endl;

}