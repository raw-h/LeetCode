#include<bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>> &matrix, int target)
{

    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row * col - 1;

    while (start <= end)
    {
        int mid = start + (end - start)/2;
        int element = matrix[mid/col][mid%col];
        if (element == target)
        {
            return true;
        }
        if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}

bool ret_val(vector<vector<int>> &matrix, int start, int end, int target, int row, int col)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int element = matrix[mid / col][mid % col];
        if (element == target)
            return true;
        else if (element < target)
            return ret_val(matrix, mid + 1, end, target, row, col);
        else if (element > target)
            return ret_val(matrix, start, mid - 1, target, row, col);
    }
    return false;
}
bool searchMatrix_recursion(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row * col - 1;
    bool val = ret_val(matrix, start, end, target, row, col);
    return val;
}
int main(){
    vector<vector<int>> matrix;
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        vector<int> temp;
        for(int j = 0; j < m; j++){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        matrix.push_back(temp);
    }
    int target;
    cin >> target;
    bool answer = searchMatrix_recursion(matrix, target);
    cout << answer << endl;
    return 0;
}