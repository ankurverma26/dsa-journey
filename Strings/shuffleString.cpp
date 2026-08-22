#include <bits/stdc++.h>
using namespace std;

string restoreString(string s, vector<int> &indices)
{
    string ans;
    int search = 0;
    while (search < indices.size())
    {
        for (int i = 0; i < indices.size(); i++)
        {
            if (indices[i] == search)
            {
                ans.push_back(s[i]);
                search++;
            }
        }
    }
    return ans;
}

int main(){
    string s="codeleet";
    vector<int>indices={4,5,6,7,0,2,1,3};
    cout<<restoreString(s,indices);
    return 0;
}