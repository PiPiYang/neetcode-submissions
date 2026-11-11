class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][10] = {false};
        bool cols[9][10] = {false};
        bool squ[9][10] = {false};

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.') continue;

                int val = board[i][j] - '0';
                int m = i/3, n = j/3; 
                int boxIndex = m * 3 + n;
                if(rows[i][val]> 0 
                    || cols[j][val] > 0
                    || squ[boxIndex][val] > 0)
                    return false;
                
                rows[i][val] = true;
                cols[j][val] = true;
                squ[boxIndex][val] = true;
            }
        }
        return true;
        
    }
};
