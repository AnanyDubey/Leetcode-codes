1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        vector<int> target_indices;
5        unordered_map<int, int> hash_table;
6        for(int i = 0; i < nums.size(); i++){
7            int second_integer = target - nums.at(i);
8            //if(hash_table.find(second_integer) != hash_table.end()){
9                if(hash_table.count(second_integer)){
10                target_indices.push_back(i);
11                target_indices.push_back(hash_table.find(second_integer)->second);
12                break;
13            }
14            else{
15                hash_table[nums.at(i)] = i;
16            }
17        }
18    return target_indices;
19    }
20};