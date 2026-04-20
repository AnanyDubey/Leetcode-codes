1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        int complement = 0;
5        unordered_map<int,int> seen;
6
7        for(int i = 0; i < nums.size(); i++) {
8            complement = target - nums[i];
9
10            if(seen.count(complement)){
11                return { seen[complement], i };
12            }
13            
14            seen[nums[i]] = i;
15        }
16    return {};
17    }
18};