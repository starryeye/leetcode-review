class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        
        unordered_set<int> us(nums.begin(), nums.end());
        
        return us.size() - us.count(0);
    }
};