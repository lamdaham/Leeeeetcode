class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_map<int, int> map;
        
        int greatest;
        int temp;
        
        for(int i = 0; i<nums.size(); i++) {
            if(map.find(nums[i]-1) == map.end()) {
                map[nums[i]] = 1;
                greatest = max(greatest, 1);
                continue;
            }
            temp = map[nums[i]-1] + 1;
            map[nums[i]] = temp;
            if(temp > greatest) {
                greatest = temp;
            }
        }
        
        return greatest;
                
    }
};