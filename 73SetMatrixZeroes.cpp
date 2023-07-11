#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    int n = 0;
    int rowSize = matrix.size();
    int colSize = matrix[0].size();
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            if (matrix[i][j] == 0)
            {
                n++;
            }
        }
    }
    int *p = new int[n * 2];
    int k = 0;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            if (matrix[i][j] == 0)
            {
                *(p + k++) = i;
                *(p + k++) = j;
            }
        }
    }
    k = 0;
    for (int z = 0; z < n * 2; z += 2)
    {
        int x = *(p + k);
        int y = *(p + k + 1);

        for (int i = 0; i < colSize; i++)
        {
            matrix[x][i] = 0;
        }

        for (int i = 0; i < rowSize; i++)
        {
            matrix[i][y] = 0;
        }
        k += 2;
    }
    delete[] p;
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

    setZeroes(matrix);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}