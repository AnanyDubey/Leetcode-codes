1class Solution {
2public:
3    string minWindow(string s, string t) {
4        if(s.length()==0 || t.length()==0 || t.length() > s.length()) return "";
5
6        int left = 0, minLen = INT_MAX;
7        int found = 0;
8
9        unordered_map<char, int> need;
10        unordered_map<char, int> window;
11
12        for(char c : t){
13            need[c]++;
14        }
15
16        int required = need.size(), start = 0;
17
18        for(int right = 0; right < s.length(); right++){
19            char c = s[right];
20            window[c]++;
21
22            if(need.count(c) && window[c] == need[c]){
23                found++;
24            }
25
26            while(required == found){
27                int currlen = (right - left) + 1;
28                if(currlen < minLen){
29                    minLen = currlen;
30                    start = left;
31                }
32                window[s[left]]--;
33
34                if(need.count(s[left]) && window[s[left]] < need[s[left]]){
35                    found--;
36                }
37                left++;
38            }
39        }
40    return (minLen == INT_MAX) ? "" : s.substr(start, minLen);
41    }
42};