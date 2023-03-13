#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
{
    vector<int>temp;
    for(int i = 0; i < mat.size(); i++){
        for(int j = 0; j < mat[0].size(); j++){
            temp.push_back(mat[i][j]);
        }
    }
    vector<vector<int>> answer(r, vector<int>(c));
    int k = 0;
    if(r * c == mat.size() * mat[0].size()){
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                answer[i][j] = temp[k];
                k++;
            }
        }
    }
    else{
        answer = mat;
    }
    return answer;
}
int main()
{
    // vector<int> matrix = {1,2,3,4,5,6,7,8,9};
    vector<vector<int>> matrix = {{1, 2}, {3, 4}};
    int r, c;
    cin >> r >> c;
    vector<vector<int>> answer = matrixReshape(matrix, r, c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}