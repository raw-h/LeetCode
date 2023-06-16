#include<bits/stdc++.h>
using namespace std;

void mirrorImage(vector<vector<int>> &matrix)
{
    int row_size = matrix.size();
    int col_size = matrix[0].size();
    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < col_size / 2; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][col_size - j - 1];
            matrix[i][col_size - j - 1] = temp;
        }
    }
}

void rotate(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j <= i; j++)
            swap(matrix[i][j], matrix[j][i]);
    }
    mirrorImage(matrix);
}

int main()
{
    vector<vector<int>> matrix;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        matrix.push_back(temp);
    }

    rotate(matrix);
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}