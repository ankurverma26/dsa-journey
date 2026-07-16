#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    vector<pair<int, int>> index;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                index.push_back({i, j});
            }
        }
    }
    for (auto i : index)
    {
        int k = i.first, l = i.second;
        while (k >= 0)
        {
            matrix[k][l] = 0;
            k--;
        }
        k = i.first;
        while (l >= 0)
        {
            matrix[k][l] = 0;
            l--;
        }
        l = i.second;
        while (k < m)
        {
            matrix[k][l] = 0;
            k++;
        }
        k = i.first;
        while (l < n)
        {
            matrix[k][l] = 0;
            l++;
        }
    }
}

int main(){
    vector<vector<int>> matrix={{1,1,1},{1,0,1},{1,1,1}};
    setZeroes(matrix);
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}