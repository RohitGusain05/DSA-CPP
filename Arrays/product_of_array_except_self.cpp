#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n), pre(n), suf(n), ans(n);

    for(int i = 0; i < n; i++) cin >> nums[i];

    int x = 1;
    for(int i = 0; i < n; i++){
        x *= nums[i];
        pre[i] = x;
    }

    x = 1;
    for(int i = n - 1; i >= 0; i--){
        x *= nums[i];
        suf[i] = x;
    }

    for(int i = 0; i < n; i++){
        int left = (i == 0 ? 1 : pre[i - 1]);
        int right = (i == n - 1 ? 1 : suf[i + 1]);
        ans[i] = left * right;
    }

    for(int x : ans) cout << x << " ";
}