#include<bits/stdc++.h>
using namespace std;

int subarray(int arr[],int size,int k){
    int longest=0,sum=0,j=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        while(sum>k){
            sum-=arr[j];
            j++;
        }
        if(sum==k){
            if(longest<i-j+1) longest=i-j+1;
        }
    }
    return longest;
}
int main(){
    int arr[]={10, 5, 2, 7, 1, 9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=15;
    cout<<subarray(arr,size,k);
    return 0;
}