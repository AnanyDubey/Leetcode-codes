1class Solution {
2    public int[] twoSum(int[] numbers, int target) {
3        int i,j;
4          int ans[]=new int[2];
5        for(i=0;i<numbers.length;i++){
6            for(j=i+1;j<numbers.length;j++){
7                if(numbers[i]+numbers[j]==target){
8                    ans[0]=i+1;
9                    ans[1]=j+1;
10                    return ans;
11                }
12            }
13            
14        }
15        return ans;
16    }
17}