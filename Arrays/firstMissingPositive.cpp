#include <bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int> &nums)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]] = i;
    }
    int ans = 1;
    while (true)
    {
        if (mp.count(ans))
            ans++;
        else
            return ans;
    }
    return ans;
}

int main(){
    vector<int> nums={3,4,-1,1};
    cout<<firstMissingPositive(nums);
    return 0;
}