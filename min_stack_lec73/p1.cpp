/*
    design min stack :-
    --> implement four functions: push() , pop() , top() , getmin()
    --> all must be implemented with constant time complexity
*/

// leetcode : 155
// solution uploaded:
class MinStack {
public:
    stack<pair<int , int>> s;       // store val , min_val on stack. min_val is the minimum value among all the values pushed on the top of the stack 

    MinStack() 
    {
        //
    }
    
    void push(int val) 
    {
        if ( s.empty())
        {
            s.push({val , val});    // when stack is empty then current value is same as minimum value 
        }

        else 
        {
            int min_val = min( val , s.top().second);       // val is current value that has to be pushed on the top of the stack . s.top().second is the min_val value from  all the values pushed earlier before pushing current value 

            s.push( {val , min_val});       // push current value and minimum value 
        }
        
    }
    
    void pop() {
        s.pop();        // removes one pair from the top
        
    }
    
    int top() {
        return s.top().first;
        
    }
    
    int getMin() {
        return s.top().second;      // because this one stores the min_val
        
    }
};

/*
    space complexity:-
    --> if n pair has to be pushed then SC = O( 2*n) , because for eac pair we are sending two values 
*/