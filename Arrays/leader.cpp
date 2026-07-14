#include<bits/stdc++.h>
using namespace std;

vector<int> leader(int arr[],int size){
    vector<int> temp;
    vector<int>ans;
    int i=size-1,current;
    while(i>=0){
        temp.push_back(arr[i]);
        current=arr[i];
        for(int j: temp){
            if(current<j){
                current=0;
                break;
            }
        }
        if(current==arr[i]) ans.push_back(current);
        i--;
    }
    return ans;
}
int main(){
    int arr[]={4, 7, 1, 0};
    int size=sizeof(arr)/sizeof(arr[0]);
    vector<int>vec=leader(arr,size);
    for(int i:vec){
        cout<<i<<" ";
    }
    return 0;
}