1class Solution {
2public:
3    vector<vector<int>> permute(vector<int>& nums) {
4        vector<vector<int>> ans;
5       
6        f(0, nums, ans);
7        return ans;
8    }
9
10    void f(int ind, vector<int> &nums, vector<vector<int>> &ans){
11        if(ind == nums.size()){ ans.push_back(nums); return ; }
12
13        for(int i = ind; i < nums.size(); i++){
14            swap(nums[i], nums[ind]);
15            f(ind+1, nums, ans);
16            swap(nums[i], nums[ind]);
17        }
18    }
19};