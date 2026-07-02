#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<5;i++){
        bool a=true;
        for(int j=0;j<=i;j++){
            if(i%2!=0){
                cout<<!a;
                a=!a;
            }
            else{
                cout<<a;
                a=!a;
            }
        }
        cout<<endl;
    }
    return 0;
}