1class MinStack {
2private:
3    stack<int> sta;
4    stack<int> minsta;
5public:
6
7    MinStack() {
8        
9    }
10    
11    void push(int value) {
12        sta.push(value);
13        
14        if(minsta.empty()) {
15            minsta.push(value);
16        }
17        else{
18            minsta.push(min(value, minsta.top()));
19        }
20    }
21    
22    void pop() {
23        sta.pop();
24        minsta.pop();
25    }
26    
27    int top() {
28        return sta.top();
29        
30    }
31    
32    int getMin() {
33        return minsta.top();
34    }
35};
36
37/**
38 * Your MinStack object will be instantiated and called as such:
39 * MinStack* obj = new MinStack();
40 * obj->push(value);
41 * obj->pop();
42 * int param_3 = obj->top();
43 * int param_4 = obj->getMin();
44 */