1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int left = 0, right = height.size() - 1;
5        int area = 0;
6        while(left < right){
7            
8            area = max(area, min(height[left], height[right]) * (right - left));
9            //if( dum > area) area = dum;
10
11            if(height[left] > height[right]) right--;
12            else left++;        
13        }
14    return area;
15    }
16};