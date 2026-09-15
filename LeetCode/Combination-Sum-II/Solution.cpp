1class Solution {
2public:
3    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
4        vector<vector<int>> ans;
5        vector<int>ds;
6        sort(candidates.begin(), candidates.end());
7        f(0, candidates, target, ans, ds);
8        return ans;
9    }
10
11   void f(int ind, vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int>ds){
12        if(target == 0){
13            ans.push_back(ds);
14            return;
15        }
16        
17        if(target < 0) return;
18        for(int i = ind; i < candidates.size();i++){
19            if(i > ind && candidates[i] == candidates[i-1]) continue;
20            ds.push_back(candidates[i]);
21            f(i+1, candidates, target - candidates[i], ans, ds);
22            ds.pop_back();
23        }
24    }
25};