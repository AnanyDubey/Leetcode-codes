1class Solution {
2public:
3    string longestPalindrome(string s) {
4        if (s.length() <= 1) return s;
5
6        int start = 0, maxLen = 1;
7
8        for (int i = 0; i < s.length(); i++) {
9            // Odd length palindrome: center at i
10            expand(s, i, i, start, maxLen);
11
12            // Even length palindrome: center between i and i+1
13            expand(s, i, i + 1, start, maxLen);
14        }
15
16        return s.substr(start, maxLen);
17    }
18
19private:
20    void expand(const string &s, int left, int right, int &start, int &maxLen) {
21        // Expand outward while characters match
22        while (left >= 0 && right < s.length() && s[left] == s[right]) {
23            left--;
24            right++;
25        }
26
27        // After breaking the loop, left/right are one step outside
28        int length = right - left - 1;    // valid palindrome length
29        int realStart = left + 1;         // starting index of that palindrome
30
31        if (length > maxLen) {
32            maxLen = length;
33            start = realStart;
34        }
35    }
36};
37