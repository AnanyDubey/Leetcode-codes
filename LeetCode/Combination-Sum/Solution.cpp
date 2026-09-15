1class Solution {
2public:
3    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
4        vector<vector<int>> ans;
5        vector<int> ds;
6        f(0, candidates, target, ans, ds);
7        return ans;
8    }
9
10    void f(int ind, vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int> &ds){
11        
12        if(target == 0){
13            ans.push_back(ds);
14            return;
15        }
16        if(target < 0) return;
17    
18        for(int i = ind; i < candidates.size();i++){
19            ds.push_back(candidates[i]);
20            //sum = sum + ds[i]
21        
22            f(i, candidates, target-candidates[i], ans, ds);
23            ds.pop_back();
24
25            
26            
27        }
28    }
29};