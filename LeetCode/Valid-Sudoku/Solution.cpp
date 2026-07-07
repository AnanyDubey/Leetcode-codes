1class Solution {
2public:
3    bool isValidSudoku(vector<vector<char>>& board) {
4        vector<unordered_set<char>> rows(9);  
5        vector<unordered_set<char>> cols(9);
6        vector<unordered_set<char>> boxes(9);
7
8        for(int r = 0; r < 9; r++){
9            for(int c = 0; c < 9; c++){
10
11                char val = board[r][c];
12
13                if(val == '.')  continue ;
14
15                if(rows[r].count(val)){
16                    return false;
17                    
18                }
19                rows[r].insert(val);
20                
21                if(cols[c].count(val)){
22                    return false;
23                }
24                
25                cols[c].insert(val);
26
27                int idx = (r/3) * 3 + (c/3);
28
29                if(boxes[idx].count(val)){
30                    return false;
31                    
32                }
33
34                boxes[idx].insert(val);
35
36            }
37        }
38    
39    
40    return true;
41    
42    }
43};