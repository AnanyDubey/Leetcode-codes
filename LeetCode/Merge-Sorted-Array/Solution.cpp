1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4        int mlast = m -1 ;
5        int nlast = n -1;
6        int olast = m + n -1 ;
7
8        while(nlast >= 0){
9            if(mlast >= 0 && nums1[mlast] >= nums2[nlast]){
10                nums1[olast] = nums1[mlast];
11                mlast--;
12            }
13            else{
14                nums1[olast] = nums2[nlast];
15                nlast--;
16            }
17        olast--;
18        }
19    }
20};