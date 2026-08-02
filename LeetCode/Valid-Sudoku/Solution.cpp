1class Solution {
2public:
3    bool isValidSudoku(vector<vector<char>>& board) {
4        vector<unordered_set<char>> cols(9);
5        vector<unordered_set<char>> rows(9);
6        vector<unordered_set<char>> boxes(9);
7
8        for(int r = 0; r < 9; r++){
9            for(int c = 0; c < 9; c++){
10
11                char val = board[r][c];
12
13                if(val == '.') continue;
14
15                if(rows[r].count(val)){
16                    return false;
17                }
18                rows[r].insert(val);
19
20                if(cols[c].count(val)){
21                    return false;
22                }
23                cols[c].insert(val);
24
25                int idx = 0;
26                idx = (r/3) * 3 + c/3;
27
28                if(boxes[idx].count(val)){
29                    return false;
30                }
31                boxes[idx].insert(val);
32
33            
34            }
35        }
36    return true;
37    }
38};