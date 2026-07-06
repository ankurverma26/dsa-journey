#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[],int size){
    int temp=arr[0];
    for (int i=0;i<size;i++){
        arr[i]=arr[i+1];
    }
    arr[size-1]=temp;
}
int main(){
    int arr[]={1,2,34,5,6,-1};
    int size=sizeof(arr)/sizeof(arr[0]);
    rotate(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}