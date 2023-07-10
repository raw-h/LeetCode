#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generateMatrix(int n)
{
    vector<vector<int>> answer;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
            temp.push_back(0);
        answer.push_back(temp);
    }
    int startingRow = 0;
    int startingCol = 0;

    int endingRow = n - 1;
    int endingCol = n - 1;

    int fill = 1;

    while (startingRow <= endingRow && startingCol <= endingCol)
    {
        for (int i = startingCol; i <= endingCol && (startingRow <= endingRow && startingCol <= endingCol); i++)
        {
            answer[startingRow][i] = fill;
            fill++;
        }

        startingRow++;

        for (int i = startingRow; i <= endingRow && (startingRow <= endingRow && startingCol <= endingCol); i++)
        {
            answer[i][endingCol] = fill;
            fill++;
        }
        endingCol--;

        for (int i = endingCol; i >= startingCol && (startingRow <= endingRow && startingCol <= endingCol); i--)
        {
            answer[endingRow][i] = fill;
            fill++;
        }
        endingRow--;

        for (int i = endingRow; i >= startingRow && (startingRow <= endingRow && startingCol <= endingCol); i--)
        {
            answer[i][startingCol] = fill;
            fill++;
        }
        startingCol++;
    }
    return answer;
}

int main()
{
    vector<vector<int>> matrix;
    int n;
    cin >> n;
    vector<vector<int>> spiralMat = generateMatrix(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << spiralMat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}