1class Solution {
2public:
3    bool isValid(string s) {
4        int len = s.length();
5        if(len <=1 ) return false;
6
7        stack<char> sta;
8
9        for(int i = 0; i < len; i++){
10            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
11                sta.push(s[i]);
12            }
13            else if(s[i]==')' || s[i]=='}' || s[i]==']'){
14                if(sta.empty()) 
15                return false;
16
17            else if(s[i]==']' && sta.top()!='[') return false;
18            else if(s[i]=='}' && sta.top()!='{') return false;
19            else if(s[i]==')' && sta.top()!='(') return false;
20
21            else sta.pop();
22            }
23        }
24
25        if(sta.empty())
26        return true;
27        else return false;
28    }
29};