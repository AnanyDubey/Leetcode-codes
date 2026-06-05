1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        unordered_map<string, vector<string>> mp;
5        vector<int> count(26);
6
7        for(string s : strs){
8            fill(count.begin(),count.end(),0);
9
10            for(char c : s){
11                count[c - 'a']++;
12            }
13                
14            string key = "";
15
16            for(int i = 0; i < 26; i++){
17                key+= "#";
18                key+= to_string(count[i]);
19            }
20            mp[key].push_back(s);
21            //mp[key].push_back(s);
22        }
23        vector<vector<string>> result;
24        for( auto &x : mp){
25            result.push_back(x.second);
26        }
27    return result;
28        
29    }
30};