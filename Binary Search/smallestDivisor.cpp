#include <bits/stdc++.h>
using namespace std;

int smallestDivisor(vector<int> &nums, int threshold)
{
    int max = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (max < nums[i])
            max = nums[i];
    }
    int low = 1, high = max;
    int result;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % mid != 0)
                sum += (nums[i] / mid) + 1;
            else
                sum += nums[i] / mid;
        }
        if (sum <= threshold)
        {
            result = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return result;
}

int main(){
    vector<int> nums={44,22,33,11,1};
    int threshold=5;
    cout<<smallestDivisor(nums,threshold);
    return 0;
}