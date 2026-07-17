1class Solution {
2public:
3    bool isPalindrome(int x) {
4        string s = to_string(x);
5        int i = 0, j=s.size()-1;
6        while(i<j){
7            if(s[i++]!=s[j--])
8            return false;
9        }
10        return 1;
11    }
12};