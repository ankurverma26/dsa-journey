#include <bits/stdc++.h>
using namespace std;

int calPoints(vector<string> &operations)
{
    vector<int> ans;
    for (string it : operations)
    {
        if (it == "C")
            ans.pop_back();
        else if (it == "+")
            ans.push_back(ans[ans.size() - 1] + ans[ans.size() - 2]);
        else if (it == "D")
            ans.push_back(2 * ans[ans.size() - 1]);
        else
            ans.push_back(stoi(it));
    }
    int answer = 0;
    for (int it : ans)
        answer += it;
    return answer;
}

int main(){
    vector<string> game={"5","-2","4","C","D","9","+","+"};
    cout<<calPoints(game);
    return 0;
}