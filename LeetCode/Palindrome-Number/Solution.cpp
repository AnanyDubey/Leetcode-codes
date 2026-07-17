1class Solution {
2public:
3    bool isPalindrome(int x) {
4        if(x==0) return true;
5        if(x<0 || x%10==0) return false;
6
7    int rev = 0;
8    while(x>rev){
9        rev = rev*10 + x%10;
10        x = x/10;
11    }
12    
13    if(x==rev){
14         return true; 
15    }
16    else if(x==rev/10) return true;
17    else {
18        return false;
19    }
20}};