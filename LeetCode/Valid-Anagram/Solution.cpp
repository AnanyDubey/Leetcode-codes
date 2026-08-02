1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4
5        if(s.length() != t.length()) return false;
6        for(int i = 0; i < s.length(); i++){
7            for(int j = 0; j < t.length(); j++){
8                if(s[i]==t[j]){
9                    //s.erase(s.begin() + i);
10                    t.erase(t.begin() + j);
11                    break;
12                }
13            }
14        }
15    cout << s << endl << t;
16    if(t.empty()) return true;
17    return false;
18    }
19};