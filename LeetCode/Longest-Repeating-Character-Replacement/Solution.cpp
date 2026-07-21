1class Solution {
2public:
3    int characterReplacement(string s, int k) {
4        int left = 0, maxx = 0, ans = 0;
5        vector<int> freq(26,0);
6
7        for(int right = 0; right < s.length(); right++){
8            freq[s[right] - 'A']++;
9            
10            maxx = max(maxx, freq[s[right] - 'A']);
11
12            if((right - left) + 1 - maxx > k){
13                freq[s[left] - 'A']--;
14                left++;
15            }
16
17            ans = max(ans, right - left + 1);
18        }    
19        return ans;
20    }
21};