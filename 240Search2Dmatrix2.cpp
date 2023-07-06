#include<bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int row_index = 0;
    int col_index = col - 1;

    while (row_index < row && col_index >= 0)
    {
        int element = matrix[row_index][col_index];

        if (target == element)
            return 1;
        else if (element < target)
            row_index++;
        else
            col_index--;
    }
    return 0;
}

int main(){
    return 0;
}