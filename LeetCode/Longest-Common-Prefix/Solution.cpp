1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        
5        string temp = strs[0];
6
7        for(int i = 1; i < strs.size(); i++){
8            int j = 0;
9
10            while(j < min(temp.size(), strs[i].size()) && temp[j] == strs[i][j]){
11                j++;
12            }
13            temp = temp.substr(0,j);
14            if(temp =="") break;
15        }
16        return temp;
17    }
18};