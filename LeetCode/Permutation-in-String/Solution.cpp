1class Solution {
2public:    
3    bool checkInclusion(string s1, string s2) {
4        int s1len = s1.length();
5        int s2len = s2.length();
6        
7        if(s1len > s2len){ return false ; }
8
9        int arr1[26] = {0}, arr2[26] = {0};
10
11        for(int i = 0; i < s1len; i++){
12            arr1[s1[i] - 'a']++;
13            arr2[s2[i] - 'a']++;
14        }
15
16        if(isEqual(arr1, arr2)) return true;
17
18        for(int i = s1len; i < s2len; i++){
19            arr2[s2[i - s1len] - 'a']--;
20            arr2[s2[i] - 'a']++;
21
22            if(isEqual(arr1, arr2)) return true;
23        }
24
25    return false;
26    }
27    bool isEqual(int arr1[], int arr2[]){
28        for(int i = 0; i < 26; i++){
29            if(arr1[i] != arr2[i]){
30                return false;
31            }
32        }
33        return true;
34    } 
35};