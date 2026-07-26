1class Solution {
2public:
3    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
4        deque<int> dq;
5        vector<int> ans;
6        if(nums.empty() || k == 0) return {};
7        for(int i = 0; i < nums.size();i++){
8            if(!dq.empty() && dq.front() < i-k+1){
9                dq.pop_front();
10            }
11
12            while(!dq.empty() && nums[dq.back()] < nums[i]){
13               dq.pop_back(); 
14            }
15            dq.push_back(i);
16            
17            if(i >= k-1){
18            ans.push_back(nums[dq.front()]);
19            }
20        }
21        return ans;
22    }
23};