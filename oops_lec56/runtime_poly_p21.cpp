// run time polymorphism 
#include <iostream>
using namespace std;

class Parent {
public:
    // 'virtual' tells the compiler: 
    // "Decide at runtime which version of hello() to call"
    virtual void hello() {
        cout << "Parent class\n";
    }
};

class Child : public Parent {
public:
    // Overrides Parent::hello()
    void hello() override {   // 'override' is optional, but good practice
        cout << "Child class\n";
    }
};

int main() {
    Parent* ptr;   // Base class pointer

    Parent p;
    Child c;

    ptr = &p;      // Pointer points to Parent object
    ptr->hello();  // Output: Parent class (base version)

    ptr = &c;      // Pointer points to Child object
    ptr->hello();  // Output: Child class (derived version, due to virtual)

    return 0;
}

/*
    --> The actual object type (Child) decides which function runs. This is runtime polymorphism.
*/