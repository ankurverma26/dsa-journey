#include <bits/stdc++.h>
using namespace std;

long long maxAlternatingSum(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] *= nums[i];
    }
    sort(nums.begin(), nums.end());
    long long ans = 0;
    int i = 0, j = nums.size() - 1;
    while (i < j)
    {
        ans += nums[j];
        ans -= nums[i];
        i++;
        j--;
    }
    if (i == j)
        ans += nums[i];
    return ans;
}

int main(){
    vector<int> nums={1,-1,2,-2,3,-3};
    cout<<maxAlternatingSum(nums);
    return 0;
}