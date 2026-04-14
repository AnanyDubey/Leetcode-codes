1class Solution {
2public:
3
4    bool isMatching(char a, char b){
5        return((a=='[' && b==']' || a=='{' && b=='}' || a=='(' && b==')'));
6    }
7
8
9    bool isValid(string s) {
10        stack<char> st;
11
12        for( int i = 0 ; i < s.length(); i++){
13            if(s[i]=='[' || s[i]=='{' || s[i]=='('){
14                st.push(s[i]);
15            }
16            else {
17                if(st.empty()){
18                    return false;
19                }
20                if(isMatching(st.top(), s[i])){
21                    st.pop();
22                }
23                else
24                    return false;
25                
26
27            }
28        
29
30        }
31
32        if(st.empty()){
33            return true;
34        }
35        else return false;
36    }
37};