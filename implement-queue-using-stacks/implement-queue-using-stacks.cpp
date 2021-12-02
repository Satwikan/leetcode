class MyQueue {
public:
    stack<int> s1;
     stack<int> s2;
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        s1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int ans;
        if(s1.empty())ans=-1;
        else{
            while(!s1.empty())
            { s2.push(s1.top());
                s1.pop(); }
            ans=s2.top();
            s2.pop();
            while(!s2.empty())
            {s1.push(s2.top());
            s2.pop();}
        }
        return ans;
    }
    
    /** Get the front element. */
    int peek() {
        int ans;
        if(s1.empty())ans=-1;
        else{
            while(!s1.empty())
            { s2.push(s1.top());
                s1.pop(); }
            ans=s2.top();
            
            while(!s2.empty())
            {s1.push(s2.top());
            s2.pop();}
        }
        return ans;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return s1.empty();
    }
};