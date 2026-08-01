1class Solution {
2public:
3    int largestRectangleArea(vector<int>& heights) {
4        stack<int> sta;
5        int area = 0;
6
7
8        for(int i = 0; i < heights.size(); i++){
9            
10            while(!sta.empty() && heights[i] < heights[sta.top()]){
11
12                int idx = sta.top();
13                sta.pop();
14
15                int height = heights[idx];
16                int width = 0;
17                if(sta.empty()){
18                    width = i ;
19                }
20                else width = i - sta.top() - 1; 
21                //int width = i - sta.top() - 1;
22                area = max(area, height * width);
23                
24            }
25            sta.push(i);
26        }
27
28        while(!sta.empty()){
29            int idx = sta.top();
30            sta.pop();
31
32            int height = heights[idx];
33            int width = 0;
34
35            if(sta.empty())
36                width = heights.size();
37            else
38                width = heights.size() - sta.top() - 1;   
39                area = max(area, height * width);
40 
41        }
42    return area;
43    }
44};