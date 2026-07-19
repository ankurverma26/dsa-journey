#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    vector<int> ans;
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }
    for (auto i : mp)
    {
        if (i.second > nums.size() / 3)
        {
            ans.push_back(i.first);
        }
        if (ans.size() == 2)
        {
            break;
        }
    }
    return ans;
}

int main(){
    vector<int> vec={1, 2, 1, 1, 3, 2, 2};
    vector<int> ans=majorityElement(vec);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}