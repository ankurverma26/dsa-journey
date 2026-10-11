#include <bits/stdc++.h>
using namespace std;

int sumOfSquares(vector<int> &nums)
{
    int n = nums.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (n % (i + 1) == 0)
            ans += nums[i] * nums[i];
    }
    return ans;
}

int main(){
    vector<int> nums={2,7,1,19,18,3};
    cout<<sumOfSquares(nums);
    return 0;
}