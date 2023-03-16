#include<bits/stdc++.h>
using namespace std;

bool isValidSudoku (vector<vector<char>> &board){
    int rows[9][9] = {0};
    int cols[9][9] = {0};
    int grid[9][9] = {0};
    
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            if(board[i][j] != '.'){
                int number = board[i][j] - '0';
                int k = i / 3 * 3 + j / 3;
                if(rows[i][number - 1]++ || cols[j][number - 1]++ || grid[k][number - 1]++)
                    return false;
            }
        }
    }
    return true;
    
}
int main(){
    return 0;
}