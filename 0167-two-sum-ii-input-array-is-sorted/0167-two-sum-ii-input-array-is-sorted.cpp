class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int temp1;
        vector<int> output;
        
        for(int i = 0; i < numbers.size(); i++) {
            if(i > 0 && numbers[i] == numbers[i-1]) {
                continue;
            }
            temp1 = target - numbers[i];
            for(int j = i+1; j < numbers.size(); j++) {

                if(numbers[j] > temp1) {
                    break;
                }
                if(numbers[j] == temp1) {
                    output.push_back(i+1);
                    output.push_back(j+1);
                }
            } 
        }
        return output;
        
    }
};