1class Solution {
2public:
3    bool isValid(string s) {
4        if(s.length()<=1) return false;
5        unordered_map<char,char> pair;
6
7        pair['}'] = '{';
8        pair[']'] = '[';
9        pair[')'] = '(';
10
11        stack<char> sta;
12
13        for(int i = 0; i < s.length(); i++){
14            if(s[i] == '[' || s[i] =='{' || s[i] =='('){
15                sta.push(s[i]);
16            }
17            
18            if(s[i] == ']' || s[i] =='}' || s[i] ==')'){
19                    if (sta.empty())
20                        return false;
21                if(sta.top() != pair[s[i]]){
22                    return false;
23                }
24            
25                if(sta.top() == pair[s[i]]){
26                    sta.pop();
27                }
28            }
29        }
30        if(sta.empty()) return true; else return false;
31    }
32};