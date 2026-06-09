/*
    Method -2 :-
    --> we will define global min_val and then push the elements from the array on the stack and will calculate the min_val 
    --> but  while doing the push operation, we will not be able to get the past min_val according to maa'm
    --> so to track the past values we :-
        --> we store val_ on stack and 
        --> val_ = 2*val - min_val
        --> so instaead of storing the current value from stack, we will store some different value and using that
            we will track back the previous value 
        --> this val_ pushed will always be smaller than min_val
        --> this formula will only be applied when current value < min_val
        --> min_val will be calculated the normal way 
    --> during pop operation we need something that so that we can convert that current min_val to old min_val :-
        --> old min_val = 2*(new min_val) - val_  , this is derieved from the above formula 
*/

// uploaded on leetcode ;

class MinStack {
public:
    stack<long long> s;
    long long int min_val ;
    MinStack() {
        
    }
    
    void push(int val) {
        if ( s.empty())
        {
            s.push(val);
            // if the stack is empty then val_ will be same as val according  to the formula

            min_val = val;      // first value is always minimum 
        }
        else 
        {
            if ( val < min_val)
            {
                long long  val_ = (long long)val*2 - min_val;  // for certain cases for int datatype , may be val_ will overflow 
                s.push(val_);
                min_val = val;
            }
            else s.push(val);   // this is greater than min_val, so no need to change 
        }
    }
    
    void pop() { 
        if ( s.top() < min_val)
        {
            min_val = 2*min_val -  s.top();   // first we will tru to get the  old min_val and then pop() will be executed
        }
        s.pop();
    }
    
    int top() {
       if ( s.top() < min_val)        // here formula was applied 
        {
            return min_val;     // we already have this value 
        }
        return s.top();     // else return the real value beacause the formula was not applied 
    }
    
    int getMin() {
        return min_val;
        
    }
};



 // space complexity is O(n);