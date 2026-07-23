1class Solution {
2public:
3    string minWindow(string s, string t) {
4
5        if (s.empty() || t.empty() || t.length() > s.length())
6            return "";
7
8        unordered_map<char, int> need;
9        unordered_map<char, int> window;
10
11        for (char c : t)
12            need[c]++;
13
14        int required = need.size();
15        int formed = 0;
16
17        int left = 0;
18        int minLen = INT_MAX;
19        int start = 0;
20
21        for (int right = 0; right < s.length(); right++) {
22
23            char c = s[right];
24            window[c]++;
25
26            if (need.count(c) && window[c] == need[c])
27                formed++;
28
29            while (formed == required) {
30
31                int windowLen = right - left + 1;
32
33                if (windowLen < minLen) {
34                    minLen = windowLen;
35                    start = left;
36                }
37
38                char leftChar = s[left];
39                window[leftChar]--;
40
41                if (need.count(leftChar) &&
42                    window[leftChar] < need[leftChar]) {
43                    formed--;
44                }
45
46                left++;
47            }
48        }
49
50        return (minLen == INT_MAX) ? "" : s.substr(start, minLen);
51    }
52};