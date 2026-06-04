1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4
5        unordered_map<string, vector<string>> mp;
6
7        vector<int> count(26);
8
9        for(string s : strs)
10        {
11            fill(count.begin(), count.end(), 0);
12
13            for(char c : s)
14            {
15                count[c-'a']++;
16            }
17
18            string key = "";
19
20            for(int i=0;i<26;i++)
21            {
22                key += "#";
23                key += to_string(count[i]);
24            }
25
26            mp[key].push_back(s);
27        }
28
29        vector<vector<string>> result;
30
31        for(auto &x : mp)
32        {
33            result.push_back(x.second);
34        }
35
36        return result;
37    }
38};