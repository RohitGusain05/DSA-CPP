#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> k;

    k %= n;
    reverse(a.begin(), a.begin() + k);
    reverse(a.begin() + k, a.end());
    reverse(a.begin(), a.end());

    for(int x : a) cout << x << " ";
}