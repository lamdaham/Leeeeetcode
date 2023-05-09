class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output;
        vector<string> indexStr;
        bool added = false;
        string temp1, temp2;
        
        for(int i = 0; i<strs.size(); i++) {
            added = false;
            temp1 = strs[i];
            sort(temp1.begin(), temp1.end());
            for(int j = 0; j<indexStr.size(); j++){
                if(temp1 == indexStr[j]) {
                    output[j].push_back(strs[i]);
                    added = true;
                    break;
                }
            }
            if(!added) {
                temp2=strs[i];
                output.push_back({temp2});
                sort(temp2.begin(), temp2.end());
                indexStr.push_back(temp2);
            }
        }
        
        return output;
        
    }
};