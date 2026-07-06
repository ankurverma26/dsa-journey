#include<bits/stdc++.h>
using namespace std;

// void rotate(int arr[],int size,int k,string direction){
//     k%=size;
//     if (k==0) return;
//     if(direction=="left"){
//         int temp=arr[0];
//         for(int i=0;i<size-1;i++){
//             arr[i]=arr[i+1];
//         }
//         arr[size-1]=temp;
//     }
//     else if(direction=="right"){
//         int temp=arr[size-1];
//         for(int i=size-1;i>0;i--){
//             arr[i]=arr[i-1];
//         }
//         arr[0]=temp;
//     }
//     rotate(arr,size,k-1,direction);
// }


void reverse_arr(int arr[],int low,int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void rotate(int arr[],int size,int k,string direction){
    if(size==0 || k%size==0) return;
    k%=size;
    if(direction=="left"){
        reverse_arr(arr,0,k-1);
        reverse_arr(arr,k,size-1);
        reverse_arr(arr,0,size-1);
    }
    else if(direction=="right"){
        reverse_arr(arr,size-k,size-1);
        reverse_arr(arr,0,size-k-1);
        reverse_arr(arr,0,size-1);
    }
}

int main(){
    int arr[]={1, 2, 3, 4, 5, 6, 7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    string dir="left";
    if(k<size){
        rotate(arr,size,k,dir);
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
    else cout<<"k is too large";
    return 0;
}