class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) {
            return s;
        }
        vector<string> output(numRows);
        int increment = 1;
        int currentIndex = 0;
        for(auto &c: s) {
            output[currentIndex] = output[currentIndex] + c;
            if(currentIndex == 0) increment = 1; // reached the top, increment
            else if(currentIndex == numRows-1) increment = -1; // reached the bottom, decrement
            currentIndex += increment;
        }
        string out = "";
        for(int i = 0; i < numRows; i++) {
            out += output[i];
        }

        return out;
    }
};