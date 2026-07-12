#include<bits/stdc++.h>
using namespace std;

void max_subaraay(int arr[],int size){
    int sum=0,maxi=INT_MIN,k=0,min_index,max_index;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
            min_index=k;
            max_index=i;
        }
        if(sum<0){
            sum=0;
            k=i+1;
        }
    }
    for(int i=min_index;i<=max_index;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    max_subaraay(arr,size);
    return 0;
}