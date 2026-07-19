1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4        //vector<int> ans;
5        for(int i = 0; i < numbers.size(); i++){
6            int second = target - numbers[i];
7            int left = i+1; int right = numbers.size()-1;
8            while(left <= right){
9                int mid = left + (right-left)/2;
10                if(second == numbers[mid]) {  return {i + 1, mid + 1}; }//return ans; }
11
12                else if(second < numbers[mid]){ right = mid - 1; } //again calculate mid 
13                else if(second > numbers[mid]){ left = mid + 1;} //again calculate mid 
14            }
15        } 
16
17    return {};
18    }
19};