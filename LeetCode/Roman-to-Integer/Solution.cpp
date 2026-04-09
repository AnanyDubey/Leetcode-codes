1class Solution {
2public:
3    int romanToInt(string s) {
4        unordered_map<char, int> mp;
5
6        mp['I'] = 1;
7        mp['V'] = 5;        
8        mp['X'] = 10;
9        mp['L'] = 50;
10        mp['C'] = 100;
11        mp['D'] = 500;       
12        mp['M'] = 1000;        
13
14        int ans = 0;
15        for(int i = 0; i < s.length(); i++){
16            if(mp[s[i]] < mp[s[i+1]]){
17                ans -= mp[s[i]];
18            }
19            else{
20                ans += mp[s[i]];
21            }
22        }
23    return ans;
24    }
25};