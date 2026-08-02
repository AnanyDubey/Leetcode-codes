1class Solution {
2public:
3    bool isPalindrome(string s) {
4        if(s.length() == 0) return true;
5        
6        int left = 0, right = s.length() - 1;
7
8        while(left < right){
9            while(left < right && !isalnum(s[left])) left++;
10            while(left < right && !isalnum(s[right])) right--;
11
12            if(tolower(s[left]) != tolower(s[right])) return false;
13            left++;right--;
14        }
15    return true;
16    }
17};