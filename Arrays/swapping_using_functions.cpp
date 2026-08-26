#include<bits/stdc++.h>
using namespace std;

void swapValues(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a, b;
    cin >> a >> b;
    swapValues(a, b);
    cout << a << " " << b;
}