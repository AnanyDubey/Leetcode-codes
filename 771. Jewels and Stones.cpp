class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        map<char,int> original , match ;
        
        for(auto x:jewels)
            original[x] = 1 ;
        
        for(auto x:stones)
            match[x]++ ;
        
        int c=0 ;
        
        for(auto x:original)
            c += match[x.first] ;
        
        return c ;
         
        
    }
};
