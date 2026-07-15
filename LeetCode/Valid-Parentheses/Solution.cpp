1class Solution {
2public:
3    bool isValid(string str) {
4        stack <char> s;
5        int len = str.length();
6        
7        for(int i = 0; i < len; i++){
8            if(str[i]== '(' || str[i]== '[' || str[i]== '{' )
9                s.push(str[i]);
10            else if(str[i]== ')' || str[i]== ']' || str[i]== '}' ){
11                if(s.empty())
12                    return false;
13            else if(str[i]== ')' && s.top() != '(')
14                return false;
15            else if(str[i]== ']' && s.top() != '[')
16                return false;
17            else if(str[i]== '}' && s.top() != '{')
18                return false;
19            else s.pop();
20                
21            }
22        }
23    
24    if( s.empty())
25        return true;
26    else
27        return false;
28        }
29    
30        
31};