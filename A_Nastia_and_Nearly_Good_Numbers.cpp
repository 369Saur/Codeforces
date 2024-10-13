#include<bits/stdc++.h>
using namespace std;
#define int long long 

void solve(int a , int b){
    if(b == 1){
        cout << "NO" << endl ;
        return ;
    }
    if(b == 2){
        cout << "YES" << endl ;
        cout << 1*a << " " << 3*a << " " << 4*a << endl ;
        return ;
    }
    cout << "YES" << endl ;
    cout << a << " " << a*(b-1) << " " << a*b << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--){
        int a , b ;
        cin >> a >> b ;
        solve(a , b) ;
    }
    return 0;
}