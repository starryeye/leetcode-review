class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_set<int> us;
        
        for(auto num : nums) {
            
            if(us.find(num) == us.end()) {
                us.insert(num);
            }else {
                us.erase(num);
            }
        }
        
        for(auto u : us) {
            return u;
        }
        
        return -1;
    }
};