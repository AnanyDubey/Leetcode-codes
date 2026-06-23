1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4
5        unordered_map<int, int> count;
6
7        // Count frequencies
8        for(int n : nums) {
9            count[n]++;
10        }
11
12        // Min heap based on frequency
13        auto cmp = [&](int a, int b) {
14            return count[a] > count[b];
15        };
16
17        priority_queue<int, vector<int>, decltype(cmp)> heap(cmp);
18
19        // Keep only top k frequent elements
20        for(auto x : count) {
21            heap.push(x.first);
22
23            if(heap.size() > k) {
24                heap.pop();
25            }
26        }
27
28        // Build answer
29        vector<int> ans;
30
31        while(!heap.empty()) {
32            ans.push_back(heap.top());
33            heap.pop();
34        }
35
36        return ans;
37    }
38};