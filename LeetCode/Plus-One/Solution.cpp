1class Solution {
2public:
3    vector<int> plusOne(vector<int>& digits) {
4
5        int n = digits.size();
6
7        // ✅ Handle single digit first
8        if (n == 1) {
9            if (digits[0] != 9) {
10                digits[0]++;
11                return digits;
12            } else {
13                return {1, 0};
14            }
15        }
16
17        int i = n - 1;
18
19        // ✅ Correct bounds check (index first, then value)
20        while (i >= 0 && digits[i] == 9) {
21            i--;
22        }
23
24        // ✅ Case where there is a non-9 before trailing 9s
25        if (i >= 0) {
26            digits[i]++;
27
28            for (int j = i + 1; j < n; j++) {
29                digits[j] = 0;
30            }
31
32            return digits;
33        }
34
35        // ✅ Case where all digits are 9
36        vector<int> new_arr(n + 1, 0);
37        new_arr[0] = 1;
38        return new_arr;
39    }
40};
41