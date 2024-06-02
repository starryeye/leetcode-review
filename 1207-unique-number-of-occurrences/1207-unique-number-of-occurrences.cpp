class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int, int> um;
        
        for(auto a : arr) {
            um[a]++;
        }
        
        unordered_set<int> us;
        
        for(auto u : um) {
            
            if(us.find(u.second) == us.end()) {
                us.insert(u.second);
            }else {
                return false;
            }
        }
        
        return true;
    }
};