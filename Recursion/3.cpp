#include<bits/stdc++.h>
using namespace std;
void print(int n,int N){
    cout<<n<<" ";
    if(n==N) return;
    else print(n+1,N);
}
int main(){
    print(1,10);
    return 0;
}