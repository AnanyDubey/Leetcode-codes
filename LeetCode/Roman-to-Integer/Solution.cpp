1class Solution {
2public:
3    int romanToInt(string s) {
4        map<char, int> roman;
5        roman.insert(make_pair('I', 1));
6        roman.insert(make_pair('V', 5));
7        roman.insert(make_pair('X', 10));
8        roman.insert(make_pair('L', 50));
9        roman.insert(make_pair('C', 100));
10        roman.insert(make_pair('D', 500));
11        roman.insert(make_pair('M', 1000));
12    
13        int len = s.length();
14        int num, sum = 0;
15        
16        for(int i = 0; i < len;){
17            if((i == (len - 1))||(roman[s[i]] >= roman[s[i+1]])){
18                num = roman[s[i]];
19                i++;
20            }
21            else{
22                num = roman[s[i+1]] - roman[s[i]];
23                i = i + 2;
24            }
25                sum = sum + num;
26            }
27        return sum;
28    }
29        
30    
31};