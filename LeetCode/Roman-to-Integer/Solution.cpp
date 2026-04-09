1class Solution {
2public:
3    int romanToInt(string s) {
4        unordered_map<char, int> mp;
5        
6        mp['I'] = 1; 
7        mp['V'] = 5;
8        mp['X'] = 10;
9        mp['C'] = 100;
10        mp['L'] = 50;
11        mp['D'] = 500;
12        mp['M'] = 1000;
13
14        int result = 0;
15
16        for(int i = 0; i < s.length(); i++){
17            if(mp[s[i]] < mp[s[i+1]] ){
18                result = result - mp[s[i]] ;
19            }
20            else{
21                result = result + mp[s[i]];
22            }
23        }
24    return result;
25
26    }
27};