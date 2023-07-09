#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> &matrix)
{
    vector<vector<int>> answer;
    int rowSize = matrix.size();
    int colSize = matrix[0].size();
    for (int i = 0; i < colSize; i++)
    {
        vector<int> v;
        for (int j = 0; j < rowSize; j++)
        {
            v.push_back(matrix[j][i]);
        }
        answer.push_back(v);
    }
    return answer;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix;
    for(int i = 0; i < n; i++){
        vector<int> v;
        for(int j = 0; j < m; j++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        matrix.push_back(v);
    }
    vector<vector<int>> answer = transpose(matrix);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}