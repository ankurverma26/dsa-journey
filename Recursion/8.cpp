#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n==0) return 0;
    if(n==1 || n==2) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    for(int i=0;i<=6;i++) cout<<fibonacci(i)<<" ";
    return 0;
}