1class Solution {
2public:
3    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
4        if(nums.size() < 1 || k == 0) return {};
5        deque<int> dq;
6        vector<int> ans;
7
8        for(int i = 0; i < nums.size(); i++){
9            if(!dq.empty() && dq.front() < i-k+1){
10                dq.pop_front();
11            }
12
13            while(!dq.empty() && nums[dq.back()] < nums[i]){
14                dq.pop_back();
15            }
16
17            dq.push_back(i);
18            if(i >= k-1){
19            ans.push_back(nums[dq.front()]);
20            }
21        }
22    return ans;
23    }
24};