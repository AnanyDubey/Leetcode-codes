1class Solution {
2public:
3    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
4        vector<vector<int>> ans;
5        vector<int> ds;
6        sort(nums.begin(), nums.end());
7        f(0, nums, ans, ds);
8        return ans;
9    }
10
11    void f(int ind, vector<int> &nums, vector<vector<int>> &ans, vector<int> &ds){
12        
13        ans.push_back(ds);
14
15        
16        for(int i = ind; i < nums.size(); i++){
17            if(i > ind && nums[i] == nums[i - 1]) continue;
18            //if(ind > 0 && ind == ind - 1) return;
19
20            ds.push_back(nums[i]);
21            f(i + 1, nums, ans, ds);
22            ds.pop_back();
23            
24        }
25    }
26    
27};