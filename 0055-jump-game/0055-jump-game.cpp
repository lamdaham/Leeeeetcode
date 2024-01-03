class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector<bool> dp (nums.size(), false);
        for(int i = nums.size()-1; i >= 0; i--) {
            if(nums[i] + i >= nums.size()-1) {
                dp[i] = true;
                continue;
            }
            for(int j = 1; j <= nums[i]; j++) {
                if(dp[i + j]) {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[0];
        
    }
};