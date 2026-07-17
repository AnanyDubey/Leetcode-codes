1class Solution {
2public:
3    bool isPalindrome(int x) {
4        int result = 0;
5        int dummy = x;
6        if(x<0) return false;
7        while(dummy){
8            int d = dummy%10;
9            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && d > 7))
10                return false;
11            result = result * 10 + d;
12            dummy/=10;
13        }
14        if(result == x) return true;
15        else return false;
16    }
17};