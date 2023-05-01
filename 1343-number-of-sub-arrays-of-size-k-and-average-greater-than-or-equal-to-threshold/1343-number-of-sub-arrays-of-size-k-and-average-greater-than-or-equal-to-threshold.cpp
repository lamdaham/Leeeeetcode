class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int output = 0;
        int temp = 0;
        
        for(int i = 0; i < k; i++) {
            temp += arr[i];
        }
        if (temp >= threshold * k) {
            output++;
        }
        
        for(int i = k; i < arr.size(); i++) {
            temp += arr[i];
            temp -= arr[i-k];
            
            if(temp >= threshold*k) {
                output++;
            }
        }
        return output;
        
    }
};