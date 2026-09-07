1class Solution {
2public:
3    void f(int ind, vector<int> &arr, int target, vector<vector<int>> &ans, vector<int> ds){
4        if(target == 0){
5            ans.push_back(ds);
6            return ;
7        }
8
9        for(int i = ind; i < arr.size(); i++){
10            if(i > ind && arr[i] == arr[i-1]) continue;
11            if(arr[i] > target) break;
12            ds.push_back(arr[i]);
13            f(i+ 1, arr, target - arr[i], ans, ds);
14            ds.pop_back();
15        }
16
17    }
18
19
20public:
21    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
22        sort(candidates.begin(), candidates.end());
23        vector<vector<int>> ans;
24        vector<int> ds;
25
26        f(0, candidates, target, ans, ds);
27        return ans;
28    }
29};