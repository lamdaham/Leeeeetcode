class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        bool hit = false;
        char lowest = 'z';
        for(int i = 0; i < letters.size(); i++) {
            if (letters[i] > target && letters[i] <= lowest) {
                lowest = letters[i];
                hit = true;
            }
        }
        if (!hit) {
            return letters[0];
        }
        return lowest;
    }
};