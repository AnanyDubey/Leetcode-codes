1class Solution {
2    public int[] plusOne(int[] digits) {
3        int i,j,k;
4        int len=digits.length;
5        
6        for(i=len-1;i>=0;i--){
7            if(digits[i]<9){
8                digits[i]+=1;
9                return digits;
10            }
11            digits[i]=0;
12        }
13            int[] ans = new int[len+1];
14            ans[0]=1;
15            return ans;
16    }
17}