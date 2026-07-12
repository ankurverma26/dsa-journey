#include<bits/stdc++.h>
using namespace std;

int max_subarray(int arr[],int size){
    int sum=0,max=INT_MIN;
    for(int i=0;i<size;i++){
       sum+=arr[i];
       if(sum>max) max=sum;
       if(sum<0) sum=0;
    }
    return max;
}
int main(){
    int arr[]={-2, -3, -7, -2, -10, -4};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<max_subarray(arr,size);
    return 0;
}