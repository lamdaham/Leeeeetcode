class Solution {
public:

    int deleteAndEarn(vector<int>& nums) {
        if(nums.size() == 1) {
            return nums[0];
        } else if (nums.size() == 0) {
            return 0;
        }
        vector<int> sums(10001, 0);
        vector<int> list(10001, 0);


        for(int i = 0; i< nums.size(); i++) {
            sums[nums[i]] += nums[i];
        }
        list[0] = sums[0];
        list[1] = sums[1];
        for(int i = 2; i< 10000; i++) {
            list[i] = max(sums[i] + list[i-2], list[i-1]);
        }
        return list[9999];
    }
};