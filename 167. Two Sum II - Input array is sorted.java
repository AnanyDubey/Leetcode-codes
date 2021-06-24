class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int i,j;
          int ans[]=new int[2];
        for(i=0;i<numbers.length;i++){
            for(j=i+1;j<numbers.length;j++){
                if(numbers[i]+numbers[j]==target){
                    ans[0]=i+1;
                    ans[1]=j+1;
                    return ans;
                }
            }
            
        }
        return ans;
    }
}
