// runtime polymorphism 
/*
    type 2 : virtual functions :
    --> we can make any function as virtual function using keyword : virtual
    --> a virtual function is a member function that you expect to be redefined in derieved classes.
    --> A virtual function allows a derived class to override a method from its base class.
    --> dynamic in nature.
    --> always defined in base class and are always with base class and overridden in child class.
    --> always called during runtime.
*/

// compile time code 
#include <iostream>
using namespace std;

class Parent {
public:
    void hello() { cout << "Parent\n"; }
};
class Child : public Parent {
public:
    void hello() { cout << "Child\n"; }
};

int main() {
    Parent* ptr = new Child();
ptr->hello();   // Output: Parent (compile-time binding)

    return 0;
}


// see the next code 
