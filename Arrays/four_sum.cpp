#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    if (nums.size() < 4)
        return {};
    vector<vector<int>> ans;
    for (int i = 0; i < nums.size() - 3; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        for (int j = i + 1; j < nums.size() - 2; j++)
        {
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;
            int k = j + 1, l = nums.size() - 1;
            while (k < l)
            {
                long long sum = 1LL * nums[i] + nums[j] + nums[k] + nums[l];
                if (sum == target)
                {
                    ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                    k++;
                    l--;
                    while (k < l && nums[k] == nums[k - 1])
                        k++;
                }
                else if (sum > target)
                {
                    l--;
                }
                else
                {
                    k++;
                }
            }
        }
    }
    return ans;
}
int main(){
    vector<int>vec={1,0,-1,0,-2,2};
    int target=0;
    vector<vector<int>>ans=fourSum(vec,target);
    for(auto i:ans){
        for(int j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}