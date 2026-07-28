1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) {
4        stack<int> st;
5
6        for (string token : tokens) {
7
8            // If token is a number
9            if (token != "+" && token != "-" &&
10                token != "*" && token != "/") {
11
12                st.push(stoi(token));
13            }
14            else {
15
16                int right = st.top();
17                st.pop();
18
19                int left = st.top();
20                st.pop();
21
22                if (token == "+")
23                    st.push(left + right);
24                else if (token == "-")
25                    st.push(left - right);
26                else if (token == "*")
27                    st.push(left * right);
28                else
29                    st.push(left / right);
30            }
31        }
32
33        return st.top();
34    }
35};