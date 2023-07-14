#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart)
{
    vector<vector<int>> answer;
    int endingRow = rows - 1;
    int endingCol = cols - 1;
    int k = 1;
    int size = 0;
    int x = rows * cols;
    int j = 1;
    while (size < x)
    {
        vector<int> temp;
        temp.reserve(2);
        for (int i = cStart;j <= k; i++)
        {
            temp.push_back(rStart);
            temp.push_back(i);
            if ((rStart >= 0 && rStart <= endingRow) && (i >= 0 && i <= endingCol))
            {
                answer.push_back(temp);
                size++;
            }
            if (size >= x)
            {
                return answer;
            }
            temp.clear();
            cStart++;
            j++;
        }
        j = 1;

        for (int i = rStart;j <= k; i++)
        {
            temp.push_back(i);
            temp.push_back(cStart);
            if ((i >= 0 && i <= endingRow) && (cStart >= 0 && cStart <= endingCol))
            {
                answer.push_back(temp);
                size++;
            }
            if (size >= x)
            {
                return answer;
            }
            temp.clear();
            rStart++;
            j++;
        }
        k++;
        j = 1;

        for (int i = cStart; j <= k; i--)
        {
            temp.push_back(rStart);
            temp.push_back(i);
            if ((rStart >= 0 && rStart <= endingRow) && (i >= 0 && i <= endingCol))
            {
                answer.push_back(temp);
                size++;
            }
            if (size >= x)
            {
                return answer;
            }
            temp.clear();
            cStart--;
            j++;
        }
        j = 1;

        for (int i = rStart; j <= k; i--)
        {
            temp.push_back(i);
            temp.push_back(cStart);
            if ((i >= 0 && i <= endingRow) && (cStart >= 0 && cStart <= endingCol))
            {
                answer.push_back(temp);
                size++;
            }
            if (size >= x)
            {
                return answer;
            }
            temp.clear();
            rStart--;
            j++;
        }
        k++;
        j = 1;
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

    int x, y;
    cin >> x >> y;
    vector<vector<int>> answer = spiralMatrixIII(n, m, x, y);
    cout << "Final answer matrix: " << endl;
    for (int i = 0; i < answer.size(); i++)
    {
        for (int j = 0; j < answer[0].size(); j++)
        {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}