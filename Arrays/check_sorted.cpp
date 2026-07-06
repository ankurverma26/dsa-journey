#include<bits/stdc++.h>
using namespace std;
bool check_sorted(int arr[],int size){
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    if(check_sorted(arr,size)) cout<<"Sorted";
    else cout<<"Not sorted";
    return 0;
}