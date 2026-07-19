1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        vector<vector<int>> result;
6
7        for(int i = 0; i < nums.size() && nums[i]<=0; i++){
8            if( i == 0 || nums[i]!=nums[i-1]) { twoSum(nums, i, result); } // Try with i+1 ;
9
10        }
11
12
13    return result;
14    }
15        void twoSum(vector<int>& nums, int i, vector<vector<int>>& result) {
16            int left = i+1, right = nums.size() - 1;
17
18            while(left < right){
19                int sum = nums[i] + nums[left] + nums[right];
20                if(sum == 0){ 
21                    result.push_back({nums[i], nums[left], nums[right]});left++;right-- ;
22
23                    while(left < right && nums[left] == nums[left - 1]) left++;
24                    while(left < right && nums[right] == nums[right + 1]) right--;
25                }
26                else if( sum < 0) { left++; }
27                else { right-- ;}
28            }
29
30        }
31};