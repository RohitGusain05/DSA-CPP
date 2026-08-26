#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> pos, neg;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x >= 0) pos.push_back(x);
        else neg.push_back(x);
    }

    int p = 0, q = 0;
    vector<int> ans;
    while(p < pos.size() && q < neg.size()){
        ans.push_back(pos[p++]);
        ans.push_back(neg[q++]);
    }
    while(p < pos.size()) ans.push_back(pos[p++]);
    while(q < neg.size()) ans.push_back(neg[q++]);

    for(int x : ans) cout << x << " ";
}