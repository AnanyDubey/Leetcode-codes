1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_set<int> s;
5
6        for(int x : nums){
7            if(s.count(x)) return true;
8            s.insert(x);
9        }
10
11        return false;
12    }
13};