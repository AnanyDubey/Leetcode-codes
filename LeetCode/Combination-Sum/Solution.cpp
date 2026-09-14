1class Solution {
2public:
3    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
4        vector<vector<int>> ans;
5        vector<int> ds;
6        //sort(candidates.begin(), candidates.end());
7        f(0, candidates, target, ans, ds);
8        return ans;
9    }
10
11    void f(int ind, vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int> &ds){
12        
13        if(target == 0){
14            ans.push_back(ds);
15            return;
16        }
17        if(target < 0) return;
18    
19        for(int i = ind; i < candidates.size();i++){
20            if (candidates[i] > target) continue;
21            ds.push_back(candidates[i]);
22            //sum = sum + ds[i]
23            f(i, candidates, target-candidates[i], ans, ds);
24            
25
26            ds.pop_back();
27            
28        }
29    }
30};