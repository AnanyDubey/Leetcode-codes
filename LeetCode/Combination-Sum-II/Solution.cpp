1class Solution {
2public:
3    void f(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds){
4    
5        if(target == 0){
6            ans.push_back(ds);
7            return ;
8        }
9            
10        for(int i = ind; i < arr.size(); i++){
11            if(i > ind && arr[i] == arr[i-1]) continue;
12            if(arr[i] > target) break;
13            ds.push_back(arr[i]);
14            f(i+1, target - arr[i], arr, ans, ds);
15            ds.pop_back();
16        }
17    }
18
19
20
21public:
22    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
23        sort(candidates.begin(), candidates.end());
24        vector<vector<int>> ans;
25        vector<int> ds;
26        int s = 0;
27        f(0, target, candidates, ans, ds);
28        return ans;
29    }
30};