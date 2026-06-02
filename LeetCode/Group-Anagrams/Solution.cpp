1class Solution{
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        
5        map<string,vector<string>> m;
6        
7        for(auto x:strs) // for(int i=0;i<strs.size();i++) ;;; x = s[i] ;
8        {
9            auto s = x ;
10            sort(s.begin(),s.end()) ;
11           // reverse(s.begin(),s.end()) ;
12            m[s].push_back(x) ;
13        }
14        
15        vector<vector<string>> ans ;
16        
17        for(auto x:m)
18            ans.push_back(x.second) ;
19        
20        return ans ;
21        
22    }
23};