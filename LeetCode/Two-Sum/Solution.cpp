1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4
5        unordered_map<int, int> mp;
6
7        for(int i = 0; i < nums.size(); i++) {
8
9            int complement = target - nums[i];
10
11            if(mp.find(complement) != mp.end()) {
12                return {mp[complement], i};
13            }
14
15            mp[nums[i]] = i;
16        }
17
18        return {};
19    }
20};