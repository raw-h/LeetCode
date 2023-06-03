#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> answer;
    int row = matrix.size();
    int column = matrix[0].size();
    int count = 0;
    int totalElement = row * column;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = column - 1;
    while (count < totalElement)
    {
        for (int i = startingCol; (count < totalElement) && (i <= endingCol); i++)
        {
            answer.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;

        for (int i = startingRow; (count < totalElement) && (i <= endingRow); i++)
        {
            answer.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;

        for (int i = endingCol; (count < totalElement) && (i >= startingCol); i--)
        {
            answer.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;

        for (int i = endingRow; (count < totalElement) && (i >= startingRow); i--)
        {
            answer.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    return answer;
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

    vector<int> ans = spiralOrder(matrix);
    for(auto it: ans){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}