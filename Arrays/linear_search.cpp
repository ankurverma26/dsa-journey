#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,5,3,2,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=6;
    int search=linear_search(arr,size,target);
    if(search==-1){
        cout<<"Not Found";
    }
    else{
        cout<<target<<" found at "<<search<<" index"<<endl;
    }
    return 0;
}