#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threesum(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for (int i = 0; i < nums.size() - 2; i++)
    {
        if (nums[i] > 0)
            break;
        int j = i + 1, k = nums.size() - 1;
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == 0)
            {
                ans.push_back({nums[i], nums[j], nums[k]});
                k--;
                j++;
                while (j < k && nums[j] == nums[j - 1])
                {
                    j++;
                }
            }
            else if (sum < 0)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    return ans;
}
int main(){
    vector<int>vec={-1,0,1,2,-1,-4};
    vector<vector<int>>ans=threesum(vec);
    for(auto i:ans){
        for(int j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}