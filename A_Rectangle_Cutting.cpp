#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b ;
    cin >> a >> b ;
    if(a%2 && b%2){
        cout << "No" << endl ;
        return ;
    }
    if(a > b){
        swap(a,b) ;
    }
    if(a%2 && b/2 == a){
        cout << "No" << endl ;
        return ;
    }
    cout << "Yes" << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}