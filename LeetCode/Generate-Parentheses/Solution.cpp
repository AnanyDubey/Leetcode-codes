1class Solution {
2public:
3    vector<string> generateParenthesis(int n) {
4        int open = 0, close = 0;
5        vector<string> ans;
6        string curr = "";
7        backtrack(ans, curr, 0, 0, n);
8
9        return ans;
10    }
11
12    void backtrack(vector<string> &ans, string &curr, int open, int close, int n){
13        if(curr.length() == 2 * n){
14            ans.push_back(curr);
15            return ;
16        }
17
18        if(open < n){
19            curr.push_back('(');
20            backtrack(ans, curr, open + 1, close,n);
21            curr.pop_back();
22        }
23
24        if(close < open){
25            curr.push_back(')');
26            backtrack(ans, curr, open, ++close,n);
27            curr.pop_back();
28        }
29
30
31    }
32};