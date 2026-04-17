1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_set<int> seen;
5        for(int x : nums){
6            if(seen.count(x)){
7                return true;
8            }
9            seen.insert(x);
10        }
11    return false;
12    }
13};