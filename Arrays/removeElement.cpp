#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    if (nums.size() == 0)
        return 0;
    int low = 0, high = nums.size() - 1;
    while (low < high)
    {
        if (nums[high] == val)
        {
            high--;
            continue;
        }
        if (nums[low] == val)
        {
            swap(nums[low], nums[high]);
            high--;
        }
        low++;
    }
    int i = 0;
    while (i < nums.size() && nums[i] != val)
        i++;
    sort(nums.begin(), nums.begin() + i);
    return i;
}

int main(){
    vector<int> nums={3,2,2,3};
    int val=3;
    int k=removeElement(nums,val);
    for(int i=0;i<k;i++) cout<<nums[i]<<" ";
    return 0;
}