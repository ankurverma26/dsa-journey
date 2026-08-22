#include<bits/stdc++.h>
using namespace std;

int mostWordsFound(vector<string>& sentences) {
    int max=0;
    for(int i=0;i<sentences.size();i++){
        int check=1;
        for(int j=0;j<sentences[i].size();j++){
            if(sentences[i][j]==' ') check++;
        }
        if(check>max) max=check;
    }
    return max;
}

int main(){
    vector<string> sentences={"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    cout<<mostWordsFound(sentences);
    return 0;
}