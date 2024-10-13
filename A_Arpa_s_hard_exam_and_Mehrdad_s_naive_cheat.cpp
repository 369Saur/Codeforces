#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
}

signed main() {
    int t ; cin >> t ;
    if(t == 0) cout << 1 ;
    else if(t%4 == 0) cout << 6 ;
    else if(t%4 == 1) cout << 8 ;
    else if(t%4 == 2) cout << 4 ;
    else if(t%4 == 3) cout << 2 ;
    return 0;
}