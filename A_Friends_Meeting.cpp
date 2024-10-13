#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
}

signed main() {
    int a , b ;
    cin >> a >> b ;
    int x = (a+b)/2 ;
    int y = abs(a-x) ;
    int z = abs(b-x) ;
    cout << (y*(y+1)/2)+(z*(z+1)/2) ;
    return 0;
}