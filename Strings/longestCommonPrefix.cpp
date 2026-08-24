#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    string ans = strs[0];
    for (int i = 0; i < strs.size() - 1; i++)
    {
        int j = 0;
        string s;
        while (j < strs[i].size() || j < strs[i + 1].size())
        {
            if (strs[i][j] != strs[i + 1][j])
                break;
            s.push_back(strs[i][j]);
            j++;
        }
        if (s.size() <= ans.size())
            ans = s;
    }
    return ans;
}

int main(){
    vector<string> strs={"acc","aaa","aaba"};
    cout<<longestCommonPrefix(strs);
    return 0;
}