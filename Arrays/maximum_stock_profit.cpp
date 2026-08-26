#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> prices(n);
    for(int i = 0; i < n; i++) cin >> prices[i];

    int mn = INT_MAX;
    int mx = 0;

    for(int x : prices){
        mn = min(mn, x);
        mx = max(mx, x - mn);
    }

    cout << mx;
}