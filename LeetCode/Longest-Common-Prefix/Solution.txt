1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        if (strs.empty()) return "";
5
6        string temp = strs[0];  // prefix string
7
8        for (int i = 1; i < strs.size(); i++) {
9            int j = 0;
10
11            // compare characters
12            while (j < min(temp.size(), strs[i].size()) && temp[j] == strs[i][j]) {
13                j++;
14            }
15
16            temp = temp.substr(0, j);  // reduce prefix
17
18            if (temp == "") break;  // optimization
19        }
20
21        return temp;
22    }
23};
24