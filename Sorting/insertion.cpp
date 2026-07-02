#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int size){
    for(int i=0;i<size;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}
int main(){
    int arr[]={2,4,1,77,3,12,4,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}