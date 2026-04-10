1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4
5        string first = strs[0];
6
7
8        for(int i = 1; i < strs.size(); i++){
9            int j = 0;
10
11            while(j < min(first.size(), strs[i].size()) && first[j] == strs[i][j]){
12                j++;
13            }
14
15            first = first.substr(0,j);
16
17            if(first == "") break;
18
19        }
20        return first;
21    }
22};