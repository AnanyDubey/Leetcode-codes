1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        vector<vector<int>> result;
5        sort(nums.begin(), nums.end());
6        for(int i = 0 ; i < nums.size()-2 && nums[i] <= 0; i++){
7            if(i == 0 || nums[i] != nums[i-1]){
8                twoSum(nums, i, result);
9            }
10        }
11        return result;
12    }
13
14    void twoSum(vector<int>& nums, int i, vector<vector<int>>&result){
15        int left = i + 1, right = nums.size()-1;
16        
17        while(left < right){
18            int sum = nums[i] + nums[left] + nums[right];
19            if(sum == 0){
20                result.push_back({nums[i], nums[left], nums[right]});
21                left++;right--;
22                while(left < right && nums[left] == nums[left - 1]) left++;
23                while(left < right && nums[right] == nums[right + 1]) right--;                
24            }    
25            else if(sum < 0) left++;
26            else right--;
27
28        
29        }     
30    }
31};