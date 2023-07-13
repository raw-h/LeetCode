#include <bits/stdc++.h>
using namespace std;
int diagonalSum(vector<vector<int>> &mat)
{
    int sum = 0;
    int n = mat.size();
    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            sum += mat[i][i];
            sum += mat[i][n - 1 - i];
        }
    }
    else
    {
        int k = n / 2;
        for (int i = 0; i < n; i++)
        {
            sum += mat[i][i];
            sum += mat[i][n - 1 - i];
        }
        sum -= mat[k][k];
    }
    return sum;
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

    int answer = diagonalSum(matrix);
    cout << answer << endl;
    return 0;
}