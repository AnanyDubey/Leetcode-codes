class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int, int> m;
        for(auto x:nums){
            m[x]++;
        }
        int c=0;
        for(auto g:m){
            c+=(g.second*(g.second-1))/2;
        }
        return c;
        
        
    }
};
