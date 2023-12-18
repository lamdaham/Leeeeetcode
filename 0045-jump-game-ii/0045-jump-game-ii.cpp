class Solution {
public:
    void jumpHelper(vector<int>& nums, vector<int>& dp, int index) {
        if(nums.size() <= 1) {
            return;
        }
        if(index == -1) {
            return;
        }
        int min = nums.size();
        if(nums[index] + index >= nums.size()-1) {
            min = 0;
        } else {
            for(int i = 1; i <= nums[index]; i++) {
                if(min > dp[i + index]) {
                    min = dp[i + index];
                }
            }
        }
        min++;
        dp[index] = min;
        jumpHelper(nums, dp, index-1);
    }
    
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), 0);
        jumpHelper(nums, dp, nums.size()-1);
        return dp[0];
    }
};