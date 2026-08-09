#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &nums, int target)
{
    int left = 0, right = nums.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
            return mid;
        if (nums[left] <= nums[mid])
        {
            if (nums[mid] > target && nums[left] <= target)
                right = mid - 1;
            else
                left = mid + 1;
        }
        else
        {
            if (nums[mid] < target && nums[right] >= target)
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
    return -1;
}

int main(){
    vector<int>vec={4,5,6,7,0,1,2};
    int element;
    cout<<"Enter element to search : ";
    cin>>element;
    cout<<search(vec,element);
    return 0;
}