1    class Solution {
2    public:
3        int evalRPN(vector<string>& tokens) {
4            if(tokens.size() < 1) return 0;
5            stack<int> sta;
6            int res = 0, left = 0, right =0;
7            for(int i = 0; i < tokens.size();i++){
8                if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/"){
9                    sta.push(stoi(tokens[i]));
10                }
11                else if(tokens[i] == "+"){
12                    right = sta.top();
13                    sta.pop();
14                    left = sta.top();
15                    sta.pop();
16                    res = left + right;
17                    sta.push(res);
18                }
19                else if(tokens[i] == "-"){
20                    right = sta.top();
21                    sta.pop();
22                    left = sta.top();
23                    sta.pop();
24                    res = left - right;
25                    sta.push(res);
26                }
27                else if(tokens[i] == "/"){
28                    right = sta.top();
29                    sta.pop();
30                    left = sta.top();
31                    sta.pop();
32                    res = left / right;
33                    sta.push(res);
34                }
35                else if(tokens[i] == "*"){
36                    right = sta.top();
37                    sta.pop();
38                    left = sta.top();
39                    sta.pop();
40                    res = left * right;
41                    sta.push(res);
42                }
43
44            }
45        return sta.top();
46        }
47    };