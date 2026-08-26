#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int mx = INT_MIN;
    vector<int> ans;

    for(int i = n - 1; i >= 0; i--){
        if(a[i] >= mx){
            ans.push_back(a[i]);
            mx = a[i];
        }
    }

    reverse(ans.begin(), ans.end());
    for(int x : ans) cout << x << " ";
}