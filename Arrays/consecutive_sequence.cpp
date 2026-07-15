#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    if (nums.empty())
        return 0;
    int count = 1, maxi = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1] + 1)
        {
            count++;
            if (count > maxi)
                maxi = count;
        }
        else if (nums[i] == nums[i - 1])
            continue;
        else
            count = 1;
    }
    return maxi;
}

int main(){
    vector<int>vec={100, 4, 200, 1, 3, 2};
    cout<<longestConsecutive(vec);
    return 0;
}