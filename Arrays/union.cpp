#include<bits/stdc++.h>
using namespace std;

vector<int> union_arrays(vector<int>&arr1,vector<int>&arr2){
    vector<int>Union;
    int i=0,j=0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]){
            if(Union.empty() || arr1[i]!=Union.back()){
                Union.push_back(arr1[i]);                
            }
            i++;
        }
        else if(arr2[j]<arr1[i]){
            if(Union.empty() || arr2[j]!=Union.back()){
                Union.push_back(arr2[j]);
            }
            j++;
        }
        else{
            if(Union.empty() || arr1[i]!=Union.back()){
                Union.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }
    while(i<arr1.size()){
        if(Union.empty() || arr1[i]!=Union.back()){
            Union.push_back(arr1[i]);            
        }
        i++;
    }
    while(j<arr2.size()){
        if(Union.empty() || arr2[j]!=Union.back()){
            Union.push_back(arr2[j]);
        }
        j++;
    }
    return Union;
}

int main(){
    vector<int>arr1={1,2,3,4};
    vector<int>arr2={2,3,4,5,6};
    vector<int>Union=union_arrays(arr1,arr2);
    for(auto i:Union){
        cout<<i<<" ";
    }
    return 0;
}