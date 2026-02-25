1class Solution {
2    public String longestCommonPrefix(String[] strs) {
3        
4        if(strs.length == 0) return "";
5        String prefix = strs[0];
6        for(int i = 0; i < strs.length; i++){
7            while(strs[i].indexOf(prefix) !=0){
8                prefix = prefix.substring(0, prefix.length()-1);
9            }
10        }
11    return prefix;
12    }
13};