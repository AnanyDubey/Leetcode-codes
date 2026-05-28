1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_set<int> mpp;
5
6        for(int x : nums){
7            if(mpp.count(x)) return true;
8            mpp.insert(x);
9        }
10        return false;
11    }
12};