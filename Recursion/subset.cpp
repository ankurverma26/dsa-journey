#include <bits/stdc++.h>
using namespace std;

void sub(vector<int> nums, vector<int> subset, int i, vector<vector<int>> &ans)
{
    if (i == nums.size())
    {
        ans.push_back(subset);
        return;
    }
    sub(nums, subset, i + 1, ans);
    subset.push_back(nums[i]);
    sub(nums, subset, i + 1, ans);
}
vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> temp;
    sub(nums, temp, 0, ans);
    return ans;
}

int main(){
    vector<int> arr={1,2,3,4};
    vector<vector<int>> ans= subsets(arr);
    for(auto i: ans){
        for(int j:i) cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}