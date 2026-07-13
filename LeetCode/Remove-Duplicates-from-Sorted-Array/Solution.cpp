1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int j = 0; 
5        for(int i = 0; i < nums.size(); i++){
6            if(nums[i] != nums[j]){
7                nums[++j] = nums[i];
8            }
9        }
10        return j + 1;
11        
12    }
13};