class NumMatrix {
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> sum_map(row, vector<int>(col, 0));
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                // 4 partition
                int sum = 0;
                if(i > 0){
                    sum_map[i][j] += sum_map[i-1][j];
                }
                if(j > 0){
                    sum_map[i][j] += sum_map[i][j-1];
                }
                if(i > 0 && j > 0){
                    sum_map[i][j] -= sum_map[i-1][j-1];
                }
                sum_map[i][j] += matrix[i][j];
            }
        }
        sum_map1 = sum_map;
    }
    
    vector<vector<int>> sum_map1;
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = sum_map1[row2][col2];
        if(col1-1 >= 0) sum -= sum_map1[row2][col1-1];
        if(row1-1 >= 0) sum -= sum_map1[row1-1][col2];
        if(col1-1 >= 0 && row1-1 >= 0) sum += sum_map1[row1-1][col1-1];

        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */