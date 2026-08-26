#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    unordered_set<int> st;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.insert(x);
    }

    int ans = 0;
    for(int x : st){
        if(st.find(x - 1) == st.end()){
            int cur = x;
            int len = 1;
            while(st.find(cur + 1) != st.end()){
                cur++;
                len++;
            }
            ans = max(ans, len);
        }
    }

    cout << ans;
}