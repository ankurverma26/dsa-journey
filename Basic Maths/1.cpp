#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0,n=3;
    while(n!=0){
        count++;
        n/=10;
    }
    cout<<count;
    return 0;
}