class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> output;
        
        for(int i = 0; i< nums.size(); i++) {
            if(map.find(nums[i]) != map.end()) {
                output.push_back(i);
                output.push_back(map[nums[i]]);
                return output;
            }
            map[target - nums[i]] = i;
        }
        return output;
    }
};