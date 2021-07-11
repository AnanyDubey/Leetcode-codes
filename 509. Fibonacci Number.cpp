class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1||n==2) return 1;
        int first=1,second=1, third;
        for(int i = 3; i <= n; i++){
            third = first + second;
            first = second;
            second = third;
        }
        return third;
    }
};
