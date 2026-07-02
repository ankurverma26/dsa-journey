#include<bits/stdc++.h>
using namespace std;
void reverse1(vector<int>&vec){
    int size=vec.size();
    int a=size-1;
    int b=0;
    while(b<a){
        swap(vec[a],vec[b]);
        a--;
        b++;
    }
}
int main(){
    vector<int>vec={1,2,3,4,5,6};
    reverse1(vec);
    for(int i=0;i<6;i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}