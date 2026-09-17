1class Solution {
2public:
3    vector<vector<int>> subsets(vector<int>& nums) {
4        vector<vector<int>> ans;
5        vector<int> ds;
6        f(0, nums, ans, ds);
7        return ans;
8    }
9
10    void f(int ind, vector<int> &nums, vector<vector<int>> &ans, vector<int> &ds){
11        if(ind == nums.size()){
12            ans.push_back(ds);
13            return;
14        }
15        ds.push_back(nums[ind]);
16        f(ind+1, nums, ans, ds);
17        ds.pop_back();
18        f(ind+1, nums, ans, ds);
19
20
21    }
22};