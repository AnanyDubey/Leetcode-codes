1class Solution {
2public:
3    vector<int> plusOne(vector<int>& digits) {
4        //int carry = 0;
5        int dsize = digits.size()-1;
6        // digits[dsize] += 1;
7        for(int i = dsize;i >= 0; i--){
8            //carry = 0;
9            if(digits[i]==9){
10                digits[i] = 0;
11            }else {
12                digits[i]+=1;
13                return digits;
14            }
15        }
16        vector<int> newArray(dsize+2,0);
17        newArray[0]=1;
18        return newArray;
19    }
20};