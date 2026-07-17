1class Solution {
2public:
3    bool isPalindrome(string s) {
4        int left = 0, right = s.length() - 1;
5
6        while(left < right){
7            while(left < right && !isalnum(s[left])) left++;
8            while(left < right && !isalnum(s[right])) right--;
9            if(tolower(s[left]) != tolower(s[right])) return false;
10            left++; right--;
11        }
12        return true;
13    }
14};