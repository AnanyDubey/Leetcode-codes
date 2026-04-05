1class Solution {
2public:
3    vector<int> plusOne(vector<int>& digits) {
4        
5        int size = digits.size()-1;
6
7        for(int i = size; i >= 0; i--){
8            if(digits[i] == 9){
9                digits[i] = 0;
10            }
11            else{
12                digits[i]++;
13                return digits;
14            }
15        }
16
17        vector <int> ans(size+2, 0);
18        ans[0] = 1;
19        return ans; 
20
21    }
22};