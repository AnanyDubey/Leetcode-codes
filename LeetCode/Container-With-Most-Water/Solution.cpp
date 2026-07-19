1    class Solution {
2    public:
3        int maxArea(vector<int>& height) {
4            int n = height.size(), res=0;
5            int i=0, j = n-1;
6            while(i<j){
7                res = max(min(height[i],height[j])*(j-i),res);
8            
9            if(height[i]>height[j])
10                j--;
11            else
12                i++;
13            }
14
15        return res;
16        }
17    };