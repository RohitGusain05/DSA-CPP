#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    int k;
    cin >> k;

    map<int,int> mp;
    mp[0] = -1;

    int prefix = 0, mx = 0;
    for(int i = 0; i < n; i++){
        prefix += nums[i];
        int x = prefix - k;

        if(mp.find(x) != mp.end()) mx = max(mx, i - mp[x]);
        if(mp.find(prefix) == mp.end()) mp[prefix] = i;
    }

    cout << mx;
}