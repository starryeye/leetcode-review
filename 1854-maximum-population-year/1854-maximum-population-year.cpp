class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        
        map<int, int> m; // k: year, v: population
        
        for(int i = 0; i < logs.size(); i++) {
            m[logs[i].front()]++;
            m[logs[i].back()]--;
        }
        
        int cur = 0;
        int max = 0;
        int answer = 0;
        
        for(auto i : m) {
            cur += i.second;
            
            if(cur > max) {
                max = cur;
                answer = i.first;
            }
        }
        
        return answer;
    }
};