class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int numZero = 0;
        for(int i:nums){
            if(i == 0) {
                numZero++;
                continue;
            }
            product = product * i;
        }
        
        if (numZero > 1) {
            return vector<int>(nums.size(), 0);
        }
        
        for(int &i:nums) {
            if(numZero == 1) {
                if(i == 0) {
                    i = product;
                    continue;
                }
                i = 0;
                continue;
            }
            i = product / i;
            
        }
        
        return nums;
        
    }
};