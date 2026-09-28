1class Solution {
2public:
3    vector<vector<int>> permute(vector<int>& nums) {
4        vector<vector<int>> ans;
5        vector<int> ds;
6        int freq[nums.size()];
7        for(int i = 0; i < nums.size(); i++){
8            freq[i] = 0;
9        }
10        f(nums, ans, ds, freq);
11        return ans;
12    }
13
14    void f( vector<int> &nums, vector<vector<int>> &ans, vector<int> &ds, int freq[]){
15        if(ds.size() == nums.size()){
16            ans.push_back(ds);
17            return;
18        }
19
20        for(int i = 0; i < nums.size(); i++){
21            if(freq[i] != 1){
22                ds.push_back(nums[i]);
23                freq[i] = 1;
24                f(nums, ans, ds, freq);
25                freq[i] = 0;
26                ds.pop_back();
27            }
28            
29        }
30    }
31};