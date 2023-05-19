class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0 ){
            return 0;
        }
        if(s.size() == 1){
            return 1;
        }
        set<char> charUsed;
        int max = 0;
        int pointer = 0;
        for(int i = 0; i < s.size(); i++) {
            if(charUsed.find(s[i]) != charUsed.end()) {
                if(i - pointer  > max) {
                    max = i-pointer;
                } 
                for(pointer; pointer < i; pointer++) {
                    if(s[i] == s[pointer]) {
                        i = pointer;
                        pointer++;
                        break;
                    }
                }
                charUsed.clear();
            } else {
                if(i - pointer+1  > max) {
                    max = i-pointer+1;
                } 
                charUsed.insert(s[i]);
            }
            // cout << i << " "; 
        }
        
        return max;

    }
};