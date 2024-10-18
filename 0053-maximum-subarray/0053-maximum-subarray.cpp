class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        /*
            논리..
            nums 배열에서 (0 ~ i index) ..
            1. i index 가 없을 때의 배열에도 maxium subarray 가 존재한다.
            2. i index 를 포함하는 배열의 maxium subarray 는 
                - i index 를 포함하는 새로운 subarray 이거나 (= i index 를 포함하는 subarray 중 가장 합계가 큼)
                - i index 가 없을 때의 배열에서 존재하던 maxium subarray
            3. i index 를 포함하는 subarray 중 가장 합계가 큰 subarray 는..
                - (i - 1) index 를 포함하는 subarray 중 가장 합계가 큰 subarray 에 i index 를 더한 합계이거나..
                - i index 혼자
            
            이를 식으로 나타내면 다음과 같다.
                - totalMax 배열 : 0 번째 부터 i 번째 까지 봤을 때, 가장 큰 maxium subarray 합계
                - curMax 배열 : i index 를 포함하는 subarray 중 가장 큰 합계
            totalMax[i] = max(totalMax[i - 1], curMax[i])
            curMax[i] = max(curMax[i - 1] + nums[i], nums[i])
        */
        
        vector<int> curMax(nums.begin(), nums.end());
        vector<int> totalMax(nums.size(), nums[0]);
        
        for (int i = 1; i < nums.size(); i++) {
            
            curMax[i] = max(curMax[i - 1] + nums[i], nums[i]);
            totalMax[i] = max(totalMax[i - 1], curMax[i]);
        }
        
        return totalMax[nums.size() - 1];
    }
};