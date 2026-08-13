#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int m = matrix.size(), n = matrix[0].size();
    int rlow = 0, rhigh = m - 1;
    while (rlow <= rhigh)
    {
        int rmid = rlow + (rhigh - rlow) / 2;
        if (target <= matrix[rmid][n - 1] && target >= matrix[rmid][0])
        {
            int clow = 0, chigh = n - 1;
            while (clow <= chigh)
            {
                int cmid = clow + (chigh - clow) / 2;
                if (target == matrix[rmid][cmid])
                    return true;
                if (target < matrix[rmid][cmid])
                    chigh = cmid - 1;
                else
                    clow = cmid + 1;
            }
        }
        if (target < matrix[rmid][0])
            rhigh = rmid - 1;
        else
            rlow = rmid + 1;
    }
    return false;
}
int main(){
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    int target=39;
    cout<<searchMatrix(matrix,target);
    return 0;
}