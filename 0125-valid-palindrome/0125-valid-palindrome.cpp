class Solution {
public:
    bool isPalindrome(string s) {
        int front = 0;
        int back = s.size()-1;
        bool output = true;
        
        while(front <= back) {
            if(!isalnum(s[front])) {
                front++;
                continue;
            }
            if(!isalnum(s[back])) {
                back--;
                continue;
            }
            if(isupper(s[front])) {
                s[front] += 32;
            }
            if(isupper(s[back])) {
                s[back] += 32;
            }
            if(s[front]!=s[back]) {
                output = false;
                break;
            }

            front++;
            back--;
        }
        return output;
        
    }

};