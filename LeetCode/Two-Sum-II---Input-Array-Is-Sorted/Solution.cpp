1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4        int left = 0, right = numbers.size()-1;
5        while(left <= right){
6            
7            int sum = numbers[left] + numbers[right] ; 
8            if(numbers[left] + numbers[right] == target) { return {left+1, right+1}; }
9
10            else if(sum < target) { left++;  }
11            else if(sum > target) { right--;}
12            cout << sum<< endl;
13        }
14        return{};
15    }
16};