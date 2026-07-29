1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4        stack<int> sta;
5        vector<int> ans(temperatures.size());
6
7        //sta.push(temperatures[0]);
8        for(int i = 0; i < temperatures.size(); i++){
9            while(!sta.empty() && temperatures[i] > temperatures[sta.top()]){
10                int idx = sta.top();
11                ans[idx] = i - idx;
12                sta.pop();    
13            }
14            sta.push(i);
15        }
16    return ans;
17    }
18};