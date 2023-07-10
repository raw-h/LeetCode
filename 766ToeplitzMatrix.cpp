#include <bits/stdc++.h>
using namespace std;

bool isToeplitzMatrix(vector<vector<int>> &matrix)
{
    int rowSize = matrix.size();
    int colSize = matrix[0].size();

    bool isIt = true;
    for (int i = 0; i < rowSize - 1; i++)
    {
        for (int j = 0; j < colSize - 1; j++)
        {
            if ((matrix[i][j] != matrix[i + 1][j + 1]) && ((i + 1) < rowSize) && ((j + 1) < colSize))
                isIt = false;
        }
    }
    return isIt;
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

    bool isIt = isToeplitzMatrix(matrix);
    cout << isIt << endl;
    return 0;
}