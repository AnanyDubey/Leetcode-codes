1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int profit = 0;
5        int min = prices[0];
6
7        for(int i = 0; i < prices.size(); i++){
8            if(prices[i] < min){
9                min = prices[i];
10            }
11
12            int dum = prices[i] - min;
13            if(dum > profit) profit = dum;
14
15        }
16
17    return profit;
18        
19    }
20};