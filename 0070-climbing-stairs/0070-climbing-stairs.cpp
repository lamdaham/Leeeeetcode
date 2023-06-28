class Solution {
public:
    int climbStairs(int n) {
        return climbHelper(n);
    }


    int climbHelper(int n) {
        vector<int> prev;
        prev.push_back(0);
        prev.push_back(1);
        prev.push_back(2);
        for (int i = 3; i <= n; i++) {
            prev.push_back(prev[i-1] + prev[i-2]);
        }

        int output = prev[n];


        return output;
    }
};