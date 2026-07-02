#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=n;i>0;i--){
        char a='A'+i-1;
        for(int j=0;j<=n-i;j++){
            cout<<char(a+j);
        }
        cout<<endl;
    }
    return 0;
}