class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<int> temp(3);
        unordered_map<int, int> map;
        sort(nums.begin(), nums.end());
        set<vector<int>> exist;
        for(int i = 0; i < nums.size()-2; i++) {
            if(i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            map.clear();
            for(int j = i + 1; j < nums.size(); j++) {
                if(map.find(nums[j]) != map.end()) {
                    temp[0] = nums[i];
                    temp[1] = map[nums[j]];
                    temp[2] = nums[j];
                    sort(temp.begin(), temp.end());
                    exist.insert(temp);
                } else {
                    if(0 - nums[j] - nums[i] < nums[j]) {
                        continue;
                    }
                    map[0 - nums[j] - nums[i]] =  nums[j];
                }
            }
        }
        vector<vector<int>> output(exist.begin(), exist.end());
        return output;
    }
};