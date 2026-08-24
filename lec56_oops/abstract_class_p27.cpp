/*
    ABSTRACT CLASS:
    --> they are declared with keyword : abstract
    --> their objects cannot  be  made
    --> they become the blueprint of other classes 
    --> It is only made for inheritence.
    --> classes containing atleast one pure virtual function automatically becomes the abstract class
*/

#include <iostream>
using namespace std;

class shape {
    // Pure virtual function initialised with  "=0" makes this function abstract.
    virtual void draw() = 0; 
    // =0 doesn’t mean “zero value.” It’s just a marker for abstraction
};

class circle : public shape 
{
    public:
    void draw()
    {
        cout << "\n drawing a circle \n";
    } 
};


int main() {
    // To use abstraction, you must create a derived class
    circle c1;
    c1.draw();
}
