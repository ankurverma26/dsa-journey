#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> ans(nums1.size(), -1);
    unordered_map<int, int> mp;
    stack<int> st;
    for (int i = 0; i < nums1.size(); i++)
    {
        mp[nums1[i]] = i + 1;
    }
    for (int i = nums2.size() - 1; i >= 0; i--)
    {
        while (!st.empty() && nums2[i] > st.top())
        {
            st.pop();
        }
        if (!st.empty() && mp[nums2[i]] != 0)
        {
            ans[mp[nums2[i]] - 1] = st.top();
        }
        st.push(nums2[i]);
    }
    return ans;
}

int main(){
    vector<int> arr1={4,1,2};
    vector<int> arr2={1,3,4,2};
    vector<int>ans=nextGreaterElement(arr1,arr2);
    for(int i:ans) cout<<i<<" ";
    return 0;
}