#include <bits/stdc++.h>
using namespace std;

vector<int> singleNumber(vector<int> &nums)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }
    vector<int> ans;
    for (auto it : mp)
    {
        if (it.second == 1)
            ans.push_back(it.first);
    }
    return ans;
}

int main(){
    vector<int> nums={1,2,1,3,2,5};
    vector<int> ans=singleNumber(nums);
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    return 0;
}