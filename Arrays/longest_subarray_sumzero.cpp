#include<bits/stdc++.h>
using namespace std;

int subarray(int arr[],int size){
    int longest=0;
    for(int i=0;i<size;i++){
        int sum=0;
        for(int j=i;j<size;j++){
            sum+=arr[j];
            if(sum==0 && j-i+1>longest){
                longest=j-i+1;
            }
        }
    }
    return longest;
}
int main(){
    int arr[]={6, -2, 2, -8, 1, 7, 4, -10};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<subarray(arr,size);
    return 0;
}