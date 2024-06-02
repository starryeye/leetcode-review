class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> answer(nums.size());
        
        int l = 0;
        int r = nums.size() - 1;
        
        int curOfIndex = nums.size() - 1;
        
        while(l <= r) {
            
            if(abs(nums[l]) < abs(nums[r])) {
                
                answer[curOfIndex] = pow(nums[r], 2);
                curOfIndex--;
                r--;
            }else {
                
                answer[curOfIndex] = pow(nums[l], 2);
                curOfIndex--;
                l++;
            }
        }
        
        return answer;
    }
};