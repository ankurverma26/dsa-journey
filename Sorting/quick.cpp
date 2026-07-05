#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high){
            i++;
        }
        while(arr[j]>pivot && j>=low){
            j--;
        }
       if(i<j) swap(arr[j],arr[i]);

    }
    swap(arr[j],arr[low]);

    return j;
}

void quick_sort(int arr[],int low,int high){
   if(low>=high) return;
   int part=partition(arr,low,high);
   quick_sort(arr,low,part-1);
   quick_sort(arr,part+1,high);
}

int main(){
    int arr[]={2,4,1,3,7,1,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int low=0,high=size-1;
    quick_sort(arr,low,high);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}