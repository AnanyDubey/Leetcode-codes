1class Solution {
2
3public:
4
5    void f(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds){
6        if( ind == arr.size()){
7            if(target == 0){
8                ans.push_back(ds);
9            }
10            return ;
11        }
12
13        if(arr[ind] <= target){
14            ds.push_back(arr[ind]);
15            f(ind, target - arr[ind], arr, ans, ds);
16            ds.pop_back();
17        }
18
19        f(ind + 1, target, arr, ans, ds);
20
21    }
22
23
24public:
25    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
26        vector<vector<int>> ans;
27        vector<int> ds;
28
29        f(0, target, candidates, ans, ds);
30        return ans;
31    }
32};