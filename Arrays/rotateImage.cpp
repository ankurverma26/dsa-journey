#include <bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = i; j < matrix.size(); j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < matrix.size(); i++)
    {
        int j = 0, k = matrix.size() - 1;
        while (j < k)
        {
            swap(matrix[i][j], matrix[i][k]);
            j++;
            k--;
        }
    }
}

int main(){
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    rotate(matrix);
    for(auto i:matrix){
        for(int j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}