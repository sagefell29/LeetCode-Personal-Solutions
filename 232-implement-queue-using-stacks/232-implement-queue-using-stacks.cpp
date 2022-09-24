class MyQueue {
public:
    stack<int> a,b;
    MyQueue() {
        
    }
    
    void push(int x) {
        a.push(x);
    }
    
    int pop() {
        int ans=-1;
        if (!b.empty())
        {
            ans=b.top();
            b.pop();
        }
        else if (b.empty() && !a.empty())
        {
            while (!a.empty())
            {
                b.push(a.top());
                a.pop();
            }
            ans=b.top();
            b.pop();
        }
        return ans;
    }
    
    int peek() {
        if (!b.empty()) return b.top(); 
        else if (b.empty() && !a.empty())
        {
            while (!a.empty())
            {
                b.push(a.top());
                a.pop();
            }
            return b.top();
        }
        return -1; 
        
    }
    
    bool empty() {
        if (a.empty() && b.empty()) return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */