#include <bits/stdc++.h>
using namespace std;

bool search(vector<int> &nums, int target)
{
    int low = 0, high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
            return true;
        if (nums[low] == nums[mid] && nums[mid] == nums[high])
        {
            high--;
            low++;
            continue;
        }
        if (nums[mid] >= nums[low] && mid >= low)
        {
            if (nums[mid] > target && nums[low] <= target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        else
        {
            if (nums[mid] < target && nums[high] >= target)
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return false;
}

int main(){
    vector<int>vec={2,5,6,0,0,1,2};
    int element;
    cout<<"Enter element to search : ";
    cin>>element;
    cout<<search(vec,element);
    return 0;
}
