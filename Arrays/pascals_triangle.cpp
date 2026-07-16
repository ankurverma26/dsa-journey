#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    if (numRows == 0)
    {
        return {};
    }
    int row = 1;
    vector<vector<int>> ans = {{1}};
    for (int i = 0; i < numRows - 1; i++)
    {
        vector<int> temp;
        int k = 0, l = ans[i][k], m = 0;
        for (int j = 0; j <= row; j++)
        {
            temp.push_back(m + l);
            m = l;

            if (k + 1 < ans[i].size())
            {
                l = ans[i][k + 1];
            }
            else
            {
                l = 0;
            }
            k++;
        }
        row++;
        ans.push_back(temp);
    }
    return ans;
}
int main(){
    int rows=5;
    vector<vector<int>> vec=generate(rows);
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}