#include<bits/stdc++.h>
using namespace std;

void name_print(int n){
    cout<<"Ankur ";
    if(n==1) return;
    else name_print(n-1);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    name_print(n);
    return 0;
}