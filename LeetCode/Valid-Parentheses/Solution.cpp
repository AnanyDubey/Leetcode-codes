1class Solution {
2public:
3    bool isValid(string s) {
4        if(s.length() <=1) return false;
5 
6        stack<char> sta;
7    for(int i = 0; i < s.length(); i++){
8        if (s[i] == '(' || s[i] == '[' || s[i] == '{'){
9            sta.push(s[i]);
10        }
11        else if (s[i] == ')' || s[i] == ']' || s[i] == '}'){
12            if(sta.empty()) return false;
13
14            else if(sta.top() == '(' && s[i] != ')') return false;
15            else if(sta.top() == '[' && s[i] != ']') return false;
16            else if(sta.top() == '{' && s[i] != '}') return false;
17            else sta.pop();
18        }
19        
20        
21    }
22
23    if(sta.empty()){
24        return true;
25    }
26
27    else return false;
28    }
29};