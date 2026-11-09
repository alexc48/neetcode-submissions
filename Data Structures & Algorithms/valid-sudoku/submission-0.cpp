class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //validate rows
        for (int r = 0; r < 9; ++r) {
            unordered_set<char> seen;
            int nums_count = 0;
            for (int c = 0; c < 9; ++c) {
                if (board[r][c] != '.') {
                    seen.insert(board[r][c]);
                    nums_count++;
                }
                if (seen.size() != nums_count) {
                    return false;
                }
            }
        }
        //validate columns
        for (int c = 0; c < 9; ++c) {
            unordered_set<char> seen;
            int nums_count = 0;
            for (int r = 0; r < 9; ++r) {
                if (board[r][c] != '.') {
                    seen.insert(board[r][c]);
                    nums_count++;
                }
                if (seen.size() != nums_count) {
                    return false;
                }
            }
        }
        //validate 3x3 grids
        for (int boxR = 0; boxR < 9; boxR+=3) {
            for (int boxC = 0; boxC < 9; boxC+=3) {
                unordered_set<char> seen;
                int nums_count = 0;
                for (int r = 0; r < 3; ++r) {
                    for (int c = 0; c < 3; ++c) {
                        if (board[boxR + r][boxC + c] != '.') {
                            seen.insert(board[boxR + r][boxC + c]);
                            nums_count++;
                        }
                        if (seen.size() != nums_count) {
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};