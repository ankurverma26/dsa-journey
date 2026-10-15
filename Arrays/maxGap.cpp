#include <bits/stdc++.h>
using namespace std;

int maximumGap(vector<int> &nums)
{
    int ans = 0;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i + 1] - nums[i] > ans)
            ans = nums[i + 1] - nums[i];
    }
    return ans;
}
int main(){
    vector<int> nums={3,6,9,1};
    cout<<maximumGap(nums);
    return 0;
}
