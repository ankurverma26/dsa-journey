#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int m = matrix.size(), n = matrix[0].size();
    int total = m * n;
    vector<int> ans;
    int i = 0, j = 0, count = 0, k = 0, l = 0;
    while (count < total)
    {
        while (j < n - k)
        {
            ans.push_back(matrix[i][j]);
            j++;
            count++;
        }
        if (count == total)
            break;
        i++;
        j--;
        while (i < m - l)
        {
            ans.push_back(matrix[i][j]);
            i++;
            count++;
        }
        if (count == total)
            break;
        i--;
        j--;

        l++;
        while (j >= k)
        {
            ans.push_back(matrix[i][j]);
            j--;
            count++;
        }
        if (count == total)
            break;

        i--;
        j++;
        k++;
        while (i >= l)
        {
            ans.push_back(matrix[i][j]);
            i--;
            count++;
        }
        i++;
        j++;
    }
    return ans;
}
int main(){
    vector<vector<int>>vec={{1,2,3},{4,5,6},{7,8,9}};
    vector<int>spiral=spiralOrder(vec);
    for(int i:spiral) cout<<i<<" ";
    return 0;
}