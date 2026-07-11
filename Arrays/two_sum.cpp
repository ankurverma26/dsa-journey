#include<bits/stdc++.h>
using namespace std;

string two_sum(int arr[],int size,int target){
    sort(arr,arr+size);
    int left=0,right=size-1;
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==target) return "YES";
        if(sum>target) right--;
        if(sum<target) left++;
    }
    return "NO";
}

int main(){
    int arr[]={2,6,5,8,11};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=14;
    cout<<two_sum(arr,size,target);
    return 0;
}