class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum1 = nums.size();
        for(int i = 0; i < nums.size(); i++) {
            sum1 += i - nums[i];
        }
        return sum1;
    }
};