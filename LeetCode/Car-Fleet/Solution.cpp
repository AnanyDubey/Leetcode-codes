1class Solution {
2public:
3    int carFleet(int target, vector<int>& position, vector<int>& speed) {
4        vector<pair<int, double>> cars;
5        double prevTime = 0;
6        int fleets = 0;
7
8        for(int i = 0; i < position.size(); i++){
9            double time = (target - position[i]) / (double)speed[i];
10            cars.push_back({position[i], time});
11        }
12
13        sort(cars.begin(), cars.end(), greater<pair<int, double>>());
14        
15        for (auto car : cars){
16            double currTime = car.second;
17            if(prevTime < currTime){
18                fleets++;
19                prevTime = currTime;
20            }
21        }
22    return fleets;
23    }
24};