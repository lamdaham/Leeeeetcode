class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> output;
        vector<int> temp;
        
        helper(output, nums, temp, nums.size());
        
        return output;
        
        
    }
    
    void helper(vector<vector<int>> &output, vector<int> &nums, vector<int> current, int x) {
        if(x == 0) {
            output.push_back(current);
            return;
        }
        int temp = nums[x-1];
        nums.pop_back();
        helper(output, nums, current, x-1);
        current.push_back(temp);
        helper(output, nums, current, x-1);
    }
};