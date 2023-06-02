class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> output;
        vector<int> temp;
        
        helper(candidates, target, temp, output,0);
        return output;
    }
    
    void helper(vector<int>& candidates, int target, vector<int> current, vector<vector<int>>& output, int index) {
        if(target == 0) {
            output.push_back(current);
            return;
        }
        for(int i = index; i < candidates.size(); i++) {
            if(candidates[i] > target) {
                continue;
            }
            current.push_back(candidates[i]);
            helper(candidates, target - candidates[i], current, output, i);
            current.pop_back();
        }
    }
};