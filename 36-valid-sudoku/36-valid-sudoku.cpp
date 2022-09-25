class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9] = {false};
        bool cols[9][9] = {false};
        bool blocks[9][9] = {false};
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.')
                    continue;
                auto block = 3*(int)(i/3) + j/3;
                auto value = board[i][j] - '1';
                if (rows[i][value] || cols[j][value] || blocks[block][value])
                    return false;
                rows[i][value] = true;
                cols[j][value] = true;
                blocks[block][value] = true;
            }
        }
        return true;
    }
};