/*
    Deep Copy :
    --> we have to write our own constructor , we won't get the default copy constructor by compiler.
    --> it makes copies of the dynamically allocated memory . so for the second object 
        we will allocate new memory.
*/

//A custom copy constructor lets you do a deep copy, allocating new memory and copying contents safely.
// Without the custom copy constructor, both objects would point to the same name memory—leading to bugs


#include<iostream>
#include<string>
using namespace std;

class student
{
    public:
    string name ;
    double *cgpaptr;

    student ( string name , double cgpa)
    {
        this -> name = name ;
        cgpaptr = new double ;
        *cgpaptr = cgpa;
    }

    student ( student &obj)
    {
        this -> name = obj.name ;
        cgpaptr = new double ;      // new memory space is allocated 
        *cgpaptr = *obj.cgpaptr;    

        // for name : deep copy is done by default because : string is a class with its own copy constructor
    }

    void getinfo()
    {
        cout << " name : " << name << endl;
        cout << "cgpa: " << *cgpaptr << endl << "\n" ;
    }
};

int main()
{
    student rishi( "rishi" , 10);
    student rishu(rishi);

    rishi.getinfo();

    *(rishu.cgpaptr) =11;
    rishi.getinfo();    // rishi cgpa will not get changed as was seen in shallow copy

    rishu.name ="rishu";
    rishu.getinfo();


}

/*
    These classes define their own copy constructors to handle deep copying:

    STL Class               Copy Constructor Behavior
    ----------------------------------------------------------------
    std::string	            Deep copies internal buffer
    std::vector<T>	        Deep copies elements and buffer
    std::map<K,V>	        Deep copies key-value pairs
    std::set<T>	            Deep copies elements
    std::list<T>	        Deep copies nodes
    std::deque<T>	        Deep copies blocks of memory
    std::shared_ptr<T>	    Copies pointer and increments ref count
    std::array<T,N>	        Copies each element
    std::array<T,N>	        Copies each element
    std::tuple<Ts...>	    Copies each element recursivel



    Some STL classes disable copying to enforce ownership or prevent unsafe behavior:
    ------------------------------------------------------------------------------------------------
    STL Class	                Copy Behavior	            Reason
    std::unique_ptr<T>	        ❌ Deleted	            Ownership must be unique
    std::mutex	                ❌ Deleted	            Copying mutexes is unsafe
    std::condition_variable	    ❌ Deleted	            Synchronization primitives can't be copied
    std::thread	                ❌ Deleted	            Threads must be moved, not copied
*/