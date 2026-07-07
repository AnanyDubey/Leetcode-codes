1class Solution {
2public:
3    bool isValidSudoku(vector<vector<char>>& board) {
4
5        vector<unordered_set<char>> rows(9);
6        vector<unordered_set<char>> cols(9);
7        vector<unordered_set<char>> boxes(9);
8
9        for(int r = 0; r < 9; r++) {
10            for(int c = 0; c < 9; c++) {
11
12                char val = board[r][c];
13
14                // Empty cell
15                if(val == '.')
16                    continue;
17
18                // Check row
19                if(rows[r].count(val))
20                    return false;
21                rows[r].insert(val);
22
23                // Check column
24                if(cols[c].count(val))
25                    return false;
26                cols[c].insert(val);
27
28                // Check 3x3 box
29                int idx = (r / 3) * 3 + (c / 3);
30
31                if(boxes[idx].count(val))
32                    return false;
33                boxes[idx].insert(val);
34            }
35        }
36
37        return true;
38    }
39};