class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;
        for(int i = 0; i < board.size(); i++) {
            map1.clear();
            map2.clear();
            for(int j = 0; j < board.size(); j++){
                if(board[i][j] != '.') {
                    if(map1[board[i][j]] > 0) {
                        cout << "A";
                        return false;
                    }
                    map1[board[i][j]]++;
                }
                if(board[j][i] != '.') {
                    if(map2[board[j][i]] > 0) {
                        cout << "B";
                        return false;
                    }
                    map2[board[j][i]]++;
                }
            }
        }

        
        map1.clear();
        for(int i = 1; i < 8; i+=3) {
            for(int j = 1; j < 8; j+=3) {
                map1.clear();
                if(board[i][j] != '.') {
                    if(map1[board[i][j]] > 0){
                        cout << "C";
                        return false;
                    }
                    map1[board[i][j]]++;
                }
                if(board[i+1][j] != '.') {
                    if(map1[board[i+1][j]] > 0){
                        cout << "D";
                        return false;
                    }
                    map1[board[i+1][j]]++;
                }
                if(board[i+1][j+1] != '.') {
                    if(map1[board[i+1][j+1]] > 0){
                        cout << "E";
                        return false;
                    }
                    map1[board[i+1][j+1]]++;
                }
                if(board[i-1][j] != '.') {
                    if(map1[board[i-1][j]] > 0) {
                        cout << "F";
                        return false;
                    }
                    map1[board[i-1][j]]++;
                }
                if(board[i-1][j-1] != '.') {
                    if(map1[board[i-1][j-1]] > 0) {
                        cout << "G";
                        return false;
                    }
                    map1[board[i-1][j-1]]++;
                }
                if(board[i][j+1] != '.') {
                    if(map1[board[i][j+1]] > 0) {
                        cout << "H";
                        return false;
                    }
                    map1[board[i][j+1]]++;
                }
                if(board[i][j-1] != '.') {
                    if(map1[board[i][j-1]] > 0) {
                        cout << "I";
                        return false;
                    }
                    map1[board[i][j-1]]++;
                }
                if(board[i-1][j+1] != '.') {
                    if(map1[board[i-1][j+1]] > 0) {
                        cout << "K";
                        return false;
                    }
                    map1[board[i-1][j+1]]++;
                }
                if(board[i+1][j-1] != '.') {
                    if(map1[board[i+1][j-1]] > 0) {
                        cout << "J";
                        return false;
                    }
                    map1[board[i+1][j-1]]++;
                }
            }
        }
        return true;
    }
};