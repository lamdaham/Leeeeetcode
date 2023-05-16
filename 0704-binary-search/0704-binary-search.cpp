class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        
        if(nums[start] == target) {
            return start;
        }
        if(nums[end] == target) {
            return end;
        }
        
        while(start - end < -1) {
            if(nums[(start + end)/2] == target) {
                return (start + end)/2;
            }
            if(nums[(start + end)/2] > target) {
                end = (start + end)/2;
            } else {
                start = (start + end)/2;
            }
            // cout << start << " " << end << endl;
        }
        return -1;
        
    }
};