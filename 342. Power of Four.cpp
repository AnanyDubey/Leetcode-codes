#include<math.h>
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        if(n<=0) return false;
        for(int i = 0; i < sqrt(n); i++){
            if(pow(4,i)==n) return true;
            
        }
        return false;
    }
};
