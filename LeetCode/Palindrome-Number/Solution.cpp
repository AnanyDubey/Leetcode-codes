1class Solution {
2public:
3    bool isPalindrome(int x) {
4        
5        if (x < 0){
6            return false;
7        }
8        else{
9        long result=0;
10            int temp, a;
11        temp = x;
12        while(temp != 0){
13            a = temp % 10;
14            temp = temp / 10;
15            result = result * 10 + a;
16        }
17        if (result == x)
18            return true;
19        else 
20            return false;
21        }
22    }
23};