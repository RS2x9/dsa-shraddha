#include<iostream>
using namespace std ;

class parent
{
    protected :     // accessible to derieved classes , but not outside 
        int secret ;
    public:
        parent(int x)
        {
            secret = x;
            cout << "Parent me value: " << secret << endl;
        }
};

class child : public parent
{
    public :
        child(int val) : parent(val) {}
        void call()
        {
            cout << "child secret: " << secret <<endl;
            // child can access the protected member 
        }
};

int main()
{
    //parent p(100);
    // calls Parent constructor with val=200
    child c(200);       
    c.call();
}