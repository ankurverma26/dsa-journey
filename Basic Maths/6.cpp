#include<bits/stdc++.h>
using namespace std;
// vector<int> divisors(int n){
//     vector<int>vec;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             vec.push_back(i);
//         }
//     }
//     return vec;
// }

vector<int> divisors(int n){
    vector<int>vec;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            vec.push_back(i);
            if(i!=n/i){
                vec.push_back(n/i);
            }
        }
    }
    sort(vec.begin(),vec.end());
    return vec;
}

int main(){
    auto a=divisors(36);
    for(int i:a){
        cout<<i<<endl;
    }
    return 0;
}