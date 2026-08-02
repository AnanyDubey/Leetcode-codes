1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        if(s.length() != t.length()) return false;
5        vector<int> ans(26, 0);
6
7        for(int i = 0; i < s.length(); i++){
8            ans[s[i] - 'a']++;
9            ans[t[i] - 'a']--;
10        }
11
12        for(int x : ans){
13            if(x != 0) return false;
14        }
15    return true;
16    }
17};