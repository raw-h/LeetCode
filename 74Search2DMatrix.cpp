#include<bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>> &matrix, int target)
{

    int row = 0;
    int col = matrix[row].size() - 1;
    while (row < matrix.size() && col >= 0)
    {
        if (matrix[row][col] == target)
        {
            return true;
        }
        if (matrix[row][col] < target)
        {
            row++;
        }
        else
        {
            col--;
        }
    }
    return false;
}
int main(){
    vector<vector<int>> matrix;
    int target;
    bool answer = searchMatrix(matrix, target);
    return 0;
}