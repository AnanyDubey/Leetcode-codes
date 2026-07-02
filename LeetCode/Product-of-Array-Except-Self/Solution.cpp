1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        vector<int> result(nums.size(), 1);
5
6        int pre = 1, post = 1;
7
8        for(int i = 0; i < nums.size(); i++){
9            
10            result[i] = pre;
11            pre = nums[i] * pre;
12        }
13
14        for(int i = nums.size()-1; i >= 0; i--){
15            result[i] = result[i] * post;
16            post = post * nums[i];
17        }
18        return result;
19    }
20};