class Solution {
public:
    vector<string> generateParenthesis(int n) {
        stack<string> stac;
        string current = "";
        
        stac.push(current);
        
        // vector<string> output;
        set<string> exist;
        string temp = "";
        
        generateHelper(exist, temp, 0, 0, n);
        
        vector<string> output(exist.begin(), exist.end());
        
        return output;
        
        
    }
    
    
    void generateHelper(set<string> &output, string par, int open, int close, int n) {
        if(open + close == n * 2) {
            output.insert(par);
            return;
        }
        
        if(open > close) {
            generateHelper(output, par + ")", open, close + 1, n);
        }
        if(open < n) {
            generateHelper(output, par + "(", open + 1, close, n);
        }
    }
    
    
    
};