class Solution {
    public int[] plusOne(int[] digits) {
        int i,j,k;
        int len=digits.length;
        
        for(i=len-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]+=1;
                return digits;
            }
            digits[i]=0;
        }
            int[] ans = new int[len+1];
            ans[0]=1;
            return ans;
    }
}
