class Solution{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        map<string,vector<string>> m;
        
        for(auto x:strs) // for(int i=0;i<strs.size();i++) ;;; x = s[i] ;
        {
            auto s = x ;
            sort(s.begin(),s.end()) ;
           // reverse(s.begin(),s.end()) ;
            m[s].push_back(x) ;
        }
        
        vector<vector<string>> ans ;
        
        for(auto x:m)
            ans.push_back(x.second) ;
        
        return ans ;
        
    }
};
