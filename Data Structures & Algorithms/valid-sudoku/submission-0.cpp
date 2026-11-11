class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // 檢查三條規則
        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> squ[9];

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                char val = board[i][j];
                if(val == '.') continue;

                int m = i/3, n = j/3; 
                int boxIndex = m * 3 + n;
                if(rows[i].count(val)> 0 
                    || cols[j].count(val) > 0
                    || squ[boxIndex].count(val) > 0)
                    return false;
                
                rows[i].insert(val);
                cols[j].insert(val);
                squ[boxIndex].insert(val);
            }
        }
        return true;
    }
};
