1class Solution {
2public:
3    bool isPalindrome(string s) {
4        if(s.length()==0) return true;
5
6        int left = 0; int right = s.length() - 1;
7
8        while(left < right){
9            while(left < right && !isalnum(s[left])){
10                left++;
11            }
12            while(left < right && !isalnum(s[right])){
13                right--;
14            }
15
16            if(tolower(s[left]) != tolower(s[right])) return false;
17        
18        left++;right--;
19        }
20        
21        return true;
22
23
24
25    }
26};