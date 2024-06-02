class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        
        vector<int> answer;
        
        unordered_map<int, int> um; // k: value of nums, v: index of nums
        
        for(int i = 0; i < nums.size(); i++) {
            um[nums[i]] = i;
        }
        
        for(int i = 0; i < nums.size(); i++) {
            int num = target - nums[i];
            
            if(um.find(num) != um.end() && um[num] != i) {
                
                answer.push_back(i);
                answer.push_back(um[num]);
                
                return answer;
            }
        }
        
        return answer;
    }
};