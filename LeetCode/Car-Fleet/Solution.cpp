1class Solution {
2public:
3    int carFleet(int target, vector<int>& position, vector<int>& speed) {
4        vector<pair<int, double>> cars;
5        int dum = 0;
6        int fleets = 0 ; 
7        double prevTime = 0;
8        
9        for(int i = 0; i < position.size(); i++){
10            double time = (double)(target - position[i]) / speed[i]; 
11            cars.push_back({position[i], time });
12        }
13        sort(cars.begin(), cars.end(), greater<pair<int, double>>()) ;
14        
15        for(auto car : cars){
16            double currTime = car.second;
17
18            if(currTime > prevTime){
19                fleets++;
20                prevTime = currTime;
21            }
22
23        }
24    return fleets;
25    }
26};