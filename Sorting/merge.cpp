#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high){
    int temp[high-low+1];
    int size=high-low+1;
    int k=0;
    int i=low;
    int j=mid+1;
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            k++;
            i++;
        }
        else{
            temp[k]=arr[j];
            k++;
            j++;
        }
    }
    while(i<=mid){
        temp[k]=arr[i];
        k++;
        i++;
    }
    while(j<=high){
        temp[k]=arr[j];
        k++;
        j++;
    }
    k=0;
    while(k<size){
        arr[low+k]=temp[k];
        k++;
    }

}

void merge_sort(int arr[],int low,int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main(){
    int arr[]={2,4,1,3,7,1,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int low=0,high=size-1;
    merge_sort(arr,low,high);
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    return 0;
}