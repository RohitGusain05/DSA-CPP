#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int n = s.size();
    int left = 0, right = 0, mx = 0;
    unordered_map<char,int> mp;

    while(right < n){
        if(mp.find(s[right]) == mp.end()){
            mp[s[right]] = right;
        }
        else{
            int nextleft = mp[s[right]] + 1;
            for(int i = left; i < nextleft; i++) mp.erase(s[i]);
            left = nextleft;
            mp[s[right]] = right;
        }

        mx = max(mx, right - left + 1);
        right++;
    }

    cout << mx;
}