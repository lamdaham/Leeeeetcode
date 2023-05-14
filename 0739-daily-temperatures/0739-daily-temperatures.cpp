class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        stack<int> temp;
        vector<int> output(temperatures.size());
        
        for(int i = 0; i<temperatures.size(); i++) {
            if(temp.size() > 0 && temperatures[i] > temperatures[temp.top()]) {
                output[temp.top()] = i - temp.top();
                temp.pop();
                i--;
            } else {
                temp.push(i);
            }
        }
        
        // for(int i = 0; i< temp.size(); i++) {
        //     output.push_back(0);
        // }
        
        return output;
        
    }
};