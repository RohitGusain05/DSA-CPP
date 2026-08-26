#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> k;

    int l = 0, r = k - 1;
    while(l < r){
        swap(a[l], a[r]);
        l++;
        r--;
    }

    for(int x : a) cout << x << " ";
}