#include <bits/stdc++.h>
using namespace std;

vector<string> buildArray(vector<int> &target, int n)
{
    int i = 1;
    vector<string> ans;
    int j = 0;
    while (j < target.size())
    {
        if (i == target[j])
        {
            ans.push_back("Push");
            j++;
        }
        else
        {
            ans.push_back("Push");
            ans.push_back("Pop");
        }
        i++;
    }
    return ans;
}

int main(){
    vector<int> target={1,2};
    int n=4;
    vector<string> ans=buildArray(target,n);
    for(string s: ans) cout<<s<<" ";
    return 0;
}