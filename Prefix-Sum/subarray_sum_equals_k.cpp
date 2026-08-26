#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    int k;
    cin >> k;

    unordered_map<int,int> mp;
    mp[0] = 1;

    int prefix = 0, cnt = 0;
    for(int i = 0; i < n; i++){
        prefix += nums[i];
        int fi = prefix - k;

        if(mp.find(fi) != mp.end()) cnt += mp[fi];
        mp[prefix]++;
    }

    cout << cnt;
}