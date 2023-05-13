class MinStack {
public:
    
    vector<int> values;
    vector<int> linkedMin;
    int pointer;
    
    MinStack() {
        pointer = -1;
    }
    
    void push(int val) {
        values.push_back(val);
        if(pointer > -1) {
            if(val < linkedMin[pointer]){
                linkedMin.push_back(val);
            } else {
                linkedMin.push_back(linkedMin[pointer]);
            }
        } else {
            linkedMin.push_back(val);
        }
        pointer++;
    }
    
    void pop() {
        values.pop_back();
        linkedMin.pop_back();
        pointer--;
    }
    
    int top() {
        return values[values.size()-1];
    }
    
    int getMin() {
        return linkedMin[values.size()-1];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */