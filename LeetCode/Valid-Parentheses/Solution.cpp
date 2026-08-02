1class Solution {
2public:
3    bool isValid(string s) {
4        if(s.length() < 1) return false;
5        int open = 0, close= 0;
6        stack<char> sta;
7
8        for(int i = 0 ; i < s.length(); i++){
9            if(s[i] =='(' || s[i] == '[' || s[i] == '{'){
10                sta.push(s[i]);
11            }
12            else if(s[i] ==')' || s[i] == ']' || s[i] == '}'){
13                if(sta.empty()) return false;
14            
15
16            else if(sta.top() == '(' && s[i] != ')') return false;
17            else if(sta.top() == '[' && s[i] != ']') return false;
18            else if(sta.top() == '{' && s[i] != '}') return false;
19            else sta.pop();
20            }
21        }
22        if(sta.empty()) return true;
23            else return false;
24    }
25};