#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &nums)
{
    int min = nums[0];
    if (min <= nums[nums.size() - 1])
        return min;
    int low = 0, high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] < min)
            min = nums[mid];
        if (nums[low] <= nums[mid])
        {
            if (nums[low] < min)
                min = nums[low];
            low = mid + 1;
        }
        else
        {
            if (nums[low] < min)
                min = nums[low];
            high = mid - 1;
        }
    }
    return min;
}

int main(){
    vector<int>vec={3,4,5,2};
    cout<<findMin(vec);
    return 0;
}