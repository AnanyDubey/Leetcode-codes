1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        if(s.size() != t.size())
5        return false;
6        int arr[26] {};
7        for(int i = 0; i < s.size(); i++){
8            arr[s[i] - 'a']++;
9            arr[t[i] - 'a']--;
10        }
11        for(int count : arr){
12            if(count != 0) return false;
13        }
14    return true;
15
16    }
17};