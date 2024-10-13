#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
}

signed main() {
    int a , b , c ;
    cin >> a >> b >> c ;
    b /= 2 , c /= 4 ;
    cout << 7*min(a,min(b,c)) ;
    return 0 ;
}