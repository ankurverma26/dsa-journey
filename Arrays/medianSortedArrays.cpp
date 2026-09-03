#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> ans;
    int i = 0, j = 0;
    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] < nums2[j])
        {
            ans.push_back(nums1[i]);
            i++;
        }
        else
        {
            ans.push_back(nums2[j]);
            j++;
        }
    }
    while (j < nums2.size())
    {
        ans.push_back(nums2[j]);
        j++;
    }
    while (i < nums1.size())
    {
        ans.push_back(nums1[i]);
        i++;
    }
    if (ans.size() % 2 == 1)
        return double(ans[ans.size() / 2]);
    return double((ans[(ans.size() - 1) / 2] + ans[(ans.size()) / 2]) / 2.0);
}

int main(){
    vector<int>nums1={1,2,3,5};
    vector<int> nums2={4,6,7};
    cout<<findMedianSortedArrays(nums1,nums2);
    return 0;
}